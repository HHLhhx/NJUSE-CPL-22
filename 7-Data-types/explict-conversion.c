#include <stdio.h>
#include <limits.h>

int main()
{
    double pi = 3.14159;

    double fraction = pi - (int)pi;

    int num = 1000000000;
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    long long LONG_LONG_INT = (long long)num * num;
    printf("i = %lld\n", LONG_LONG_INT);

    return 0;
}