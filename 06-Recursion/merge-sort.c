#include <stdio.h>

#define LEN 7

/**
 * @brief  Mergesort nums[left ... right]
 * @param  num[]:
 * @param  left:
 * @param  right:
 * @retval None
 */
void MergeSort(int num[], int left, int right);
/**
 * @brief  Merge nums[left ... mid] and nums[mid + 1 ... right]
 * @param  nums[]:
 * @param  left:
 * @param  mid:
 * @param  right:
 * @retval None
 */
void Merge(int nums[], int left, int mid, int right);

int main()
{
    int numbers[LEN] = {38, 27, 43, 3, 9, 82, 10};

    MergeSort(numbers, 0, LEN - 1);

    for (int i = 0; i < LEN; i++)
    {
        printf("%d ", numbers[i]);
    }
    return 0;
}

void MergeSort(int nums[], int left, int right)
{
    if (left == right)
    {
        return;
    }
    int mid = (left + right) / 2;
    MergeSort(nums, left, mid);
    MergeSort(nums, mid + 1, right);

    Merge(nums, left, mid, right);
}

void Merge(int nums[], int left, int mid, int right)
{
    int size = right - left + 1;
    // VLA (variable-length array)
    // 最好别用
    int copy[size];
    for (int i = 0, j = left; i < size; i++, j++)
    {
        copy[i] = nums[j];
    }
    int left_index = left;
    int right_index = mid + 1;
    int copy_index = 0;

    while (left_index <= mid && right_index <= right)
    {
        if (nums[left_index] <= nums[right_index])
        {
            copy[copy_index] = nums[left_index];
            left_index++;
        }
        else
        {
            copy[copy_index] = nums[right_index];
            right_index++;
        }
        copy_index++;
    }

    while (left_index <= mid)
    {
        copy[copy_index] = nums[left_index];
        left_index++;
        copy_index++;
    }

    while (right_index <= right)
    {
        copy[copy_index] = nums[right_index];
        right_index++;
        copy_index++;
    }

    for (int i = 0, j = left; i < size; i++, j++)
    {
        nums[j] = copy[i];
    }
}