#include <math.h>
#include <stdio.h>
#define NUM_OF_PARTITION 100000

double Integrate(double low, double high, double (*fp)(double) /*一个指针指向一个接受double返回double的函数*/);

int main()
{
    double low = 0.0;
    double high = 1.0;
    double integration = 0.0;

    integration = Integrate(low, high, sin);
    printf("sin : %f\n", integration);

    integration = Integrate(low, high, cos);
    printf("cos : %f\n", integration);

    // 函数指针数组类型
    // 读法：fps是一个数组,数组里有两个元素,每个元素是一个指针,指针指向一个函数,这个函数接受double返回double
    double (*fps[2])(double) = {sin, cos}; // 把函数指针放到数组里
    for (int i = 0; i < 2; i++)
    {
        printf("%f\n", Integrate(low, high, fps[i]));
    }

    return 0;
}

double Integrate(double low, double high, double (*fp)(double))
{
    double interval = (high - low) / NUM_OF_PARTITION;

    double sum = 0.0;
    for (int i = 0; i < NUM_OF_PARTITION; i++)
    {
        double xi = low + interval * i;
        double yi = fp(xi);
        sum += yi * interval;
    }

    return sum;
}