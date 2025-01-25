#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;

    scanf("%d%d", &a, &b);
    int min = 0;

    if (a >= b)
    {
        min = b;
    }
    else
    {
        min = a;
    }
    // {}: 当里面的代码只有一行时，可以省略{}
    // 也可写成 min = a >= b ? b : a 意为若 a >= b 则输出b;否则输出a

    printf("min{%d,%d} = %d\n", a, b, min);

    return 0;
}
