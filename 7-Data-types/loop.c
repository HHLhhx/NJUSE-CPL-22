/* 不要用浮点数类型的值做循环计数器 */
#include <stdio.h>

int main()
{
    for (double x = 0.1; x <= 1.0; x += 0.1)
    {
        printf("%.20f\n", x);
    }

    return 0;
}