#include <stdio.h>

int Sum(int nums[], int len);

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};

    int sum = Sum(numbers, sizeof numbers / sizeof numbers[0]); // sizeof arr / sizeof arr[0]:计算arr数组长度

    printf("sum = %d\n", sum);

    return 0;
}

int Sum(int nums[], int len)
{
    if (len == 0)
    {
        return 0l;
    }

    int partial_sum = Sum(nums, len - 1);

    return partial_sum + nums[len - 1];
}