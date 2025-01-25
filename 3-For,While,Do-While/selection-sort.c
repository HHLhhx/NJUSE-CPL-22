/* 交换数值(引入中间变量) */
#include <stdio.h>

#define LEN 20
int numbers[LEN] = {0};

int main()
{
    int len = -1;
    while (scanf("%d", &numbers[++len]) != EOF) // 用于输入不定长度的数组
        ;
    // 在相应文件夹创建一个文档文件（例如命名为1），然后在终端（需要在所需要运行的文件*夹下）cat 1.txt | .\(所需要运行的文件名)

    for (int i = 0; i < len; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for (int i = 0; i < len - 1; i++)
    {
        // find the minimum value of numbers[i .. n - 1]
        int min = numbers[i];
        int min_index = i;

        for (int j = i; j < len; j++)
        {
            if (numbers[j] < min)
            {
                min = numbers[j];
                min_index = j;
            }
        }

        int temp = numbers[i];           // **记住**
        numbers[i] = numbers[min_index]; // **经典**
        numbers[min_index] = temp;       // **代码**
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", numbers[i]);
    }

    return 0;
}