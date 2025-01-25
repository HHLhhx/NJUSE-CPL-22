#include <stdio.h>

/* 再再进一步化简 leap4.c */
int main()
{
    int year = 0;
    scanf("%d", &year);

    int leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
    /* 由于 if 中即确定了leap的取值，故表达式即为leap的结果 */

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