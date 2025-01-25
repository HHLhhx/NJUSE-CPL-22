#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    scanf("%d%d%d", &a, &b, &c);

    int min;

    if (a > b)
    {
        if (b > c)
        {
            min = c;
        }
        else // a > c > b
        {
            min = b;
        }
    }
    else // b > a
    {
        if (a < c)
        {
            min = a;
        }
        else // b > a > c
        {
            min = c;
        }
    }

    printf("min{%d,%d,%d} = %d\n", a, b, c, min);

    return 0;
}
