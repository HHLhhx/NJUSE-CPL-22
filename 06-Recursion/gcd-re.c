#include <stdio.h>

int Gcd(int a, int b);

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    printf("%d", Gcd(a, b));

    return 0;
}

int Gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return Gcd(b, a % b);
}