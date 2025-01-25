/* 实参 形参 拷贝 */
/* 以renew-leap.c为例解释 */
#include <stdio.h>

#define LEN 20

void Print(const int arr[], int len);
void SelectionSort(int arr[], int len);
// void Swap(int left, int right);

int main()
{
    int numbers[LEN] = {0};

    int len = -1;
    while (scanf("%d", &numbers[++len]) != EOF)
        ;

    Print(numbers, len);
    SelectionSort(numbers, len);
    Print(numbers, len);

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

void SelectionSort(int arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        int min = arr[i];
        int min_index = i;

        for (int j = i; j < len; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j;
            }
        }
        // 这里并不与后面说的拷贝矛盾
        // 这里强调了数组的首地址[]，因此会通过地址对元素进行修改

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;

        // 目前不能用函数分装Swap，原因如下：
        // 例如arr[i] == 1, arr[min_index] == 5
        //   Swap(arr[i], arr[min_index]);
    }
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