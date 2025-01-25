/* 迭代算fibonacci更快 */
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long fib0 = 0;
    long long fib1 = 1;

    long long fib2 = 0;
    for (int i = 2; i <= n; i++)
    {
        fib2 = fib0 + fib1;

        fib0 = fib1;
        fib1 = fib2;
    }
    printf("Fib(%d) = %lld\n", n, fib2);

    return 0;
}