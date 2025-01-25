#include <stdio.h>
#define NUM 5 // 预处理

int main()
{
    int numbers[NUM] = {23, 56, 19, 11, 78}; // 有限数组

    int min = numbers[0];
    // 访问数组中的元素：用下标访问（即[0]为23）
    for (int i = 1; i < NUM; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    // i++ = ++i = i + 1
    // i < NUM not i <= NUM
    // int i = 1：从C99开始运用

    printf("min = %d", min);

    return 0;
}