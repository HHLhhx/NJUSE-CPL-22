#include <stdio.h>

/* 从语法角度修改 leap1.c */
int main()
{
    int year = 0;
    scanf("%d", &year);

    int leap = 0;
    if (year % 4 != 0)
    {
        leap = 0;
    }
    else if (year % 100 != 0)
    {
        leap = 1; // year % 4 == 0 and year % 100 != 0
    }
    else if (year % 400 != 0)
    {
        leap = 0;
    }
    else
    {
        leap = 1; // year % 400 == 0
    }
    // 由于当{}里面的代码只有一行时，可以省略{},故当else后紧跟if时，建议省略{}

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }

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
