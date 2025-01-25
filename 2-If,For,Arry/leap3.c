#include <stdio.h>

/* 进一步化简 leap2.c */
int main()
{
    int year = 0;
    scanf("%d", &year);

    int leap = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        leap = 1;
    }
    else
    {
        leap = 0;
    }
    // &&：表示“和”
    // ||：表示“或”
    // ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)：从左到右求值 （短路求值概念）
    /* 由于 leap2.c 中所备注的，从逻辑上可将 if 进一步化简 */

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
