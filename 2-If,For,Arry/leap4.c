#include <stdio.h>

/* 再进一步化简 leap3.c */
int main()
{
    int year = 0;
    scanf("%d", &year);

    int leap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        leap = 1;
    }
    /* 由于 leap = 0 已在第9行赋值，故 else 也可删去 */

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