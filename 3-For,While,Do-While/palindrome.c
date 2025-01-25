/* 判断是否回环 */
#include <stdio.h>
#include <stdbool.h>

#define LEN 21
char string[LEN] = "";

int main()
{
    scanf("%20s", string); // 输入字符串可以直接这样输入

    int len = 0;
    while (string[len] != '\0')
    {
        len++;
    }

    bool is_palindrome = true;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (string[i] != string[j])
        {
            is_palindrome = false;
            break;
        }
    }

    printf("\"%s\" is %s a palindrome.\n", string, // \"：输出"
           is_palindrome ? "" : "not");            // 三元运算符

    return 0;
}