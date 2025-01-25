#include <stdio.h>

#define NUM 5

int Min(int nums[], int len);

int main()
{
    int nums[NUM] = {35, 34, 25, 46, 47};

    int min = MIN(nums, NUM);

    printf("min = %d\n", min);

    return 0;
}

int Min(int nums[], int len)
{
    if (len == 1)
    {
        return nums[0];
    }

    int partial_min = Min(nums, len - 1);

    return partial_min < nums[len - 1] ? partial_min : nums[len - 1];
}