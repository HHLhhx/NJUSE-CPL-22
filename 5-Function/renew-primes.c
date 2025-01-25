#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int number);

int main()
{
    int max = 0;
    scanf("%d", &max);

    int count = 0;
    for (int number = 2; number <= max; number++)
    {
        if (IsPrime(number))
        {
            count++;
            printf("%d ", number);
        }
    }
    printf("\ncount = %d\n", count);

    return 0;
}

bool IsPrime(int number)
{
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false; // return也起break的作用
        }
    }
    return true;
}