#include <stdio.h>
#include <stdbool.h> // 引入bool变量，即 真-1-true; 假-0-false
/* 从数学上改进 */

int main()
{
    int max = 0;
    scanf("%d", &max);

    int count = 0;
    for (int number = 2; number <= max; number++)
    {
        bool is_prime = true; // boolean
        for (int i = 2; i * i <= number; i++) // 由素数可知，只需要测 根号number 及其前面的数字即可
        {
            if (number % i == 0)
            {
                is_prime = false; // boolean
                break;
            }
        }
        if (is_prime)
        {
            count++;
            printf("%d ", number);
        }
    }
    printf("\ncount = %d\n", count);

    return 0;
}