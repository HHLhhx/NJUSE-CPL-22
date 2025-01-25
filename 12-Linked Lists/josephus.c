#include <stdio.h>
#include <assert.h>
#include "ll/ll.h"
#include "ll/ll.c"

#define NUM 100

void SitAroundCircle(LinkedList *list, int num);
void KillUntilOne(LinkedList *list);
int GetSurvivor(const LinkedList *list);

int main()
{
    for (int i = 1; i <= NUM; i++)
    {
        LinkedList list;
        Init(&list);

        SitAroundCircle(&list, i);
        GetSurvivor(&list);
        // Print(&list);
        KillUntilOne(&list);
        int survivor = GetSurvivor(&list);
        printf("%d : %d\n", i, survivor);

        Free(&list);

        // 为什么不能这样写？
        // LinkedList *list;
        // Init(list);
        // SitAroundCircle(list, i);
        // GetSurvivor(list);
        // KillUntilOne(list);
        // int survivor = GetSurvivor(list);
        // printf("%d : %d\n", i, survivor);
        // Free(list);
    }

    return 0;
}

void SitAroundCircle(LinkedList *list, int num)
{
    for (int i = 1; i <= num; i++)
    {
        Append(list, i);
    }
}

void KillUntilOne(LinkedList *list)
{
    Node *node = list->head;
    while (!IsSingleton(list))
    {
        Delete(list, node);
        node = node->next;
    }
}

int GetSurvivor(const LinkedList *list)
{
    // assert: 若assert()括号内的内容为真，则继续往下运行,否则停止,可用来查找错误的位置
    // assert(IsSingleton(list));
    return GetHeadVal(list);
}