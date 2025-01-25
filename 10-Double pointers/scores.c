#include <stdio.h>
#include <stdlib.h>

#define COLS 3

void Print(int table[][COLS], int rows);

int main()
{
    int rows = 0;
    printf("Please input the number of students.\n");
    scanf("%d", &rows);

    // 二维数组的指针
    int(*scores)[COLS] = malloc(rows * COLS * sizeof **scores); // 如何为二维数组申请空间
    if (scores == NULL)
    {
        return 0;
    }

    printf("Please input the scores of these students.\n");

    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            scanf("%d", &scores[row][col]);
        }
    }

    Print(scores, rows);

    int(*ptr_scores)[COLS] = scores;
    printf("ptr_scores[3][2] = %d\n", (*(ptr_scores + 3))[2]);

    free(scores);

    return 0;
}

// int table[]: int *table
// int table[][COLS]: int (*table)[COLS]
void Print(int (*table)[COLS], int rows)
{
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            //? 还不太理解
            // table[i][j] == *((*(table + i)) + j);
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}