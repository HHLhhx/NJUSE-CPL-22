/* 更新5-Function里的renew-selection-sort.c */
#include <stdio.h>
#include <stdlib.h>

void Print(const int arr[], int len);
void SelectionSort(int arr[], int len);
void Swap(int *left, int *right);

int main()
{
    int len = 0;
    scanf("%d", &len);

    int *numbers = malloc(len * sizeof(*numbers));
    // malloc函数: 申请连续空间 ; ( )内的参数: 申请连续空间的字节数
    // 属于<stdlib.h>
    // sizeof(int): 每个整型数所占的字节数
    // return value: (void *) ; C语言中,指向空类型的指针可以转化为指向任意类型的指针
    if (numbers == NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }
    // NULL: null pointer ((void *) 0) ; 不指向任何地方的指针
    // 使用malloc后的检查操作
    for (int i = 0; i < len; i++)
        scanf("%d", &numbers[i]);

    Print(numbers, len);
    SelectionSort(numbers, len);
    // SelectionSort(&numbers[0], len)
    // 在表达式中,数组名是第一个元素的首地址
    Print(numbers, len);

    free(numbers);
    // (1) 不能再free(numbers);
    // (2) 释放空间后不能再访问或修改该空间
    return 0;
}

void Print(const int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 数组作形参时 int arr[] == int *arr
// 那么对指针而言,下标有什么意义呢？(如下)
void SelectionSort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = arr[i];
        // arr[i] <=> *(arr + i) <=> *(i + arr) <=> i[arr]
        // 等同于 int min = *(arr + i);
        //  *(arr + i): 意为指向第i项
        int min_index = i;

        for (int j = i; j < len; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }

        Swap(&arr[i], &arr[min_index]);
        // &arr[i] = &(*(arr + i)) = arr + i
        // Swap(arr + i, arr + min_index)

        // int temp = arr[i];
        // arr[i] = arr[min_index];
        // arr[min_index] = temp;
    }
}

void Swap(int *left, int *right)
{
    int temp = *left;
    *left = *right;
    *right = temp;
}

// left = 1, right = 5
//   void Swap(int left, int right)
//   {
//       int temp = left;
//       left = right;
//       right = temp;
//   }
// left = 5, right = 1
// 这只是一份拷贝
// 不影响arr[i]和arr[min_index]里的元素