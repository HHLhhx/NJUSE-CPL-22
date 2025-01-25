/* 涉及数组参数的函数 */
#include <stdio.h>

#define LEN 10
// out of any function: global variables
// scope作用域: life time (file scope)
// 全局变量是很危险的，外界可随意更改
// int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

/* 新注释方式 */

/**
 * Search for the key in the dict.
 * @param  key: the key to search for
 * @param  dict[]:
 * @param  len:
 * @retval the index of the key in the dict if found, -1 otherwise
 */
int BinarySearch(int key, const int dict[], int len);
/*
 * 从int dict[]中可知: (1)数组首地址[]；(2)每个元素类型int
 * 可访问，但不知道有多长
 * 引入int len,提醒操作者不要越界
 */

int main()
{
    // 将其放入main函数内，避免全局变量的出现
    int dictionary[LEN] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};

    int key = 0;
    scanf("%d", &key);

    int index = BinarySearch(key, dictionary, LEN);
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

// const: 若只读不改，则用const标记，强制约束不允许修改const标记的元素
int BinarySearch(int key, const int dict[], int len)
{
    int low = 0;
    int high = len - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key > dict[mid])
        {
            low = mid + 1;
        }
        else if (key < dict[mid])
        {
            high = mid - 1;
        }
        else
        {
            return mid; // 用return语句消除指示变量化简代码
        }
    }
    return -1;
}