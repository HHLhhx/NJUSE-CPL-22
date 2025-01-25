#ifndef INC_CPL_LEARNING_CPL_12_LINKED_LISTS_LL_LL_H_
#define INC_CPL_LEARNING_CPL_12_LINKED_LISTS_LL_LL_H_

#include <stdbool.h>

typedef struct node
{
    int val;
    struct node *next;
} Node;

// Invariants
// (1) head always points to the first node
// (2) tail always points to the last node
typedef struct ll
{
    Node *head;
    Node *tail;
} LinkedList;

void Init(LinkedList *list);

bool IsEmpty(const LinkedList *list);
bool IsSingleton(const LinkedList *list);

/**
 * @brief  Return -1 if the list is empty
 * @param  *list
 * @retval
 */
int GetHeadVal(const LinkedList *list);
Node *Search(const LinkedList *list);

void Print(const LinkedList *list);

void Append(LinkedList *list, int val);
void Insert(LinkedList *list, Node *prev, int val);
void Delete(LinkedList *list, Node *prev);

void Free(LinkedList *list);

#endif // INC_CPL_LEARNING_CPL_12_LINKED_LISTS_LL_LL_H_