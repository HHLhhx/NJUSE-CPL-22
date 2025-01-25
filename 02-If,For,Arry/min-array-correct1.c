#include <stdio.h>
#define NUM 5

int main()
{
    int numbers[NUM] = {0};
    // int numbers[NUM] = { n }：表示第一个元素为n，其余元素为0
    // int numbers[NUM] = {[2] = 1}：表示第三个元素为1，其余元素为0

    for (int i = 0; i < NUM; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int min = numbers[0];

    for (int i = 1; i < NUM; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }

    printf("min = %d", min);

    return 0;
}