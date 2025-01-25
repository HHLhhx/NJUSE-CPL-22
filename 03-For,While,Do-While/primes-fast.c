#include <stdio.h>
/* 引入 break */

int main()
{
    int max = 0;
    scanf("%d", &max);

    int count = 0;
    for (int number = 2; number <= max; number++)
    {
        int is_prime = 1;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_prime = 0;
                break; // 由于当 number % i == 0 时，number已经不是素数，就无需继续测了
            }
        }
        if (is_prime) // is_prime != 0 （即为真）可以省略
        {
            count++;
            printf("%d ", number);
        }
    }
    printf("\ncount = %d\n", count);

    return 0;
}