/* 递归算fibonacci更慢 */
#include <stdio.h>

long long Fib(int n);

int main()
{
    int n;
    scanf("%d", &n);

    printf("Fib(%d) = %lld", n, Fib(n));
    return 0;
}

long long Fib(int n)
{
    if (n <= 1)
    {
        return n;
    }

    return Fib(n - 1) + Fib(n - 2);
}