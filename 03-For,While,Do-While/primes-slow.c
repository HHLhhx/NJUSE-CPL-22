#include <stdio.h>

int main()
{
    int max = 0;
    scanf("%d", &max);

    int count = 0;
    for (int number = 2; number <= max; number++)
    {
        int is_prime = 1; // is_prime = 1: 是素数
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                is_prime = 0; // is_prime = 0: 不是素数
            }
        }
        if (is_prime == 1)
        {
            count++;
            printf("%d ", number);
        }
    }
    printf("\ncount = %d\n", count);

    return 0;
}