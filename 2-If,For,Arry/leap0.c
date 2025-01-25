#include <stdio.h>

int main()
{
    int year = 0;
    scanf("%d", &year);

    int leap;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap = 1;
            }
            else
            {
                leap = 0;
            }
        }
        else
        {
            leap = 1;
        }
    }
    else
    {
        leap = 0;
    }
    // ==: 运算符“等于”
    // =: 初始化（赋值）
    // %: 取余运算
    /* 缺点：太长了，头重脚轻 */

    if (leap == 0)
    {
        printf("The year %d is a common year.\n", year);
    }
    else
    {
        printf("The year %d is a leap year.\n", year);
    }

    return 0;
}
