#include <stdio.h>

#define LEN 10

int Binarysearch(int key, int dict[], int low, int high);

int main()
{
    int dictionary[LEN] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};

    int key;
    scanf("%d", &key);

    printf("The index is %d\n", Binarysearch(key, dictionary, 0, LEN - 1));

    return 0;
}

int Binarysearch(int key, int dict[], int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = (high + low) / 2;
    if (dict[mid] == key)
    {
        return mid;
    }

    if (dict[mid] > key)
    {
        return Binarysearch(key, dict, low, mid - 1);
    }

    return Binarysearch(key, dict, mid + 1, high);
}