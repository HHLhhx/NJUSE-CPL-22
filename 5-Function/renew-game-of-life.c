#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define SIZE 6

// 二维数组的列不能空
void ExtendBoard(const int origin_board[][SIZE], int extended_board[][SIZE + 2]);
void PrintExtendedBoard(const int extended_board[][SIZE + 2]);
void GenerateNewBoard(const int old_board[][SIZE + 2], int new_board[][SIZE + 2]);
void CopyExtendedBoard(const int src_board[][SIZE + 2], int dest_board[][SIZE + 2]);
void SleepAndClear(int ms);

int main()
{
    const int board[SIZE][SIZE] =
        {{0},
         {0, 1, 1, 0, 0, 0},
         {0, 1, 1, 0, 0, 0},
         {0, 0, 0, 1, 1, 0},
         {0, 0, 0, 1, 1, 0},
         {0}};

    int old_board[SIZE + 2][SIZE + 2] = {0};
    ExtendBoard(board, old_board);
    SleepAndClear(1000);
    PrintExtendedBoard(old_board);

    int new_board[SIZE + 2][SIZE + 2] = {0};
    for (int round = 1; round <= 10; round++)
    {
        GenerateNewBoard(old_board, new_board);
        SleepAndClear(1000);
        PrintExtendedBoard(new_board);
        CopyExtendedBoard(new_board, old_board);
    }

    return 0;
}

void ExtendBoard(const int origin_board[][SIZE], int extended_board[][SIZE + 2])
{
    for (int row = 0; row < SIZE + 2; row++)
    {
        for (int col = 0; col < SIZE + 2; col++)
        {
            if (row == 0 || col == 0 || row == SIZE + 1 || col == SIZE + 1)
            {
                extended_board[row][col] = 0;
            }
            else
            {
                extended_board[row][col] = origin_board[row - 1][col - 1];
            }
        }
    }
}

void PrintExtendedBoard(const int extended_board[][SIZE + 2])
{
    for (int row = 1; row <= SIZE; row++)
    {
        for (int col = 1; col < SIZE; col++)
        {
            printf("%c", extended_board[row][col] ? '*' : ' ');
        }
        printf("\n");
    }
}

void GenerateNewBoard(const int old_board[][SIZE + 2], int new_board[][SIZE + 2])
{
    for (int row = 1; row <= SIZE; row++)
    {
        for (int col = 1; col <= SIZE; col++)
        {
            int neighbors =
                old_board[row - 1][col - 1] +
                old_board[row - 1][col] +
                old_board[row - 1][col + 1] +
                old_board[row][col - 1] +
                old_board[row][col + 1] +
                old_board[row + 1][col - 1] +
                old_board[row + 1][col] +
                old_board[row + 1][col + 1];

            if (old_board[row][col])
            {
                new_board[row][col] = (neighbors == 2 || neighbors == 3);
            }
            else
            {
                new_board[row][col] = (neighbors == 3);
            }
        }
    }
}

void CopyExtendedBoard(const int src_board[][SIZE + 2], int dest_board[][SIZE + 2])
{
    for (int row = 1; row <= SIZE; row++)
    {
        for (int col = 1; col < SIZE; col++)
        {
            dest_board[row][col] = src_board[row][col];
        }
    }
}

void SleepAndClear(int ms)
{
    Sleep(ms);
    system("cls");
}