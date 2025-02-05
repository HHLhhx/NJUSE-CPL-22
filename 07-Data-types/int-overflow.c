/* 无符号整型的回绕现象 */
#include <stdio.h>
#include <limits.h>

int main()
{
    printf("UINT_MAX = %u\n", UINT_MAX);

    unsigned int max = UINT_MAX;
    unsigned int one = 1U;
    unsigned int two = 2U;

    printf("max + one = %u\n", max + one);
    printf("one - two = %u\n", one - two);

    return 0;
}