/* 无符号与有符号整型混用的后果 */
#include <stdio.h>
#include <limits.h>

int main()
{
    int array[] = {0, 1, 2, 3, 4};
    int i = -1;

    // size_t : unsigned long long
    /*
     * typedef : 定义类型
     * 如: typedef unsigned long long int size_t
     *     typedef long clock_t
     */
    size_t size = sizeof array;
    printf("The size of the array is %zu\n", size);

    if (i <= size)
    {
        printf("i <= sizeof array\n");
    }
    else
    {
        printf("i > sizeof array\n");
    }
    return 0;
}