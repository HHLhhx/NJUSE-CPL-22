#include <stdio.h>
int main()
{
    const double PI = 3.14159;
    // const: 定义(内容大写)   double: 常数
    int radius = 10;

    double circumference = 2 * PI * radius;
    double area = PI * radius * radius;

    printf("circumference = %.2f\narea = %.2f\n",
           circumference, area);

    return 0;
}