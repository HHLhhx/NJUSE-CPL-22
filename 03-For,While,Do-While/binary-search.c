/*
 *     !!!!重点!!!!
 * !!!!《二分查找》!!!!
 * 从小到大排序的整数组
 * 查找一个数是否在此数组里
 * 若不在，输出-1
 * 若在，则输出该数在数组中的下标
 */
#include <stdio.h>
#define LEN 10

int main()
{
    int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int key = 0;
    scanf("%d", &key);

    int low = 0;
    int high = LEN - 1;
    int index = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key > dictionary[mid])
        {
            low = mid + 1;
        }
        else if (key < dictionary[mid])
        {
            high = mid - 1;
        }
        else // key == dictionary[mid]
        {
            index = mid;
            high = index - 1; // 这一行代码是为了找出若有重复数字时最左边的那个数的下标
        }
    }

    if (index == -1)
    {
        printf("Not found!\n");
    }
    else
    {
        printf("The index of %d is %d\n", key, index);
    }

    return 0;
}