#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define LEN 21
char string[LEN] = "";

bool IsPalindrome(const char str[]); // 若存入的是字符串，则不需要定义len限制长度

int main()
{
    scanf("%20s", string);

    int len = 0;
    while (string[len] != '\0')
    {
        len++;
    }

    printf("\"%s\" is %s a palindrome.\n", string,
           IsPalindrome(string) ? "" : "not");
    return 0;
}

bool IsPalindrome(const char str[])
{
    // int len = 0;
    // while (string[len] != '\0')
    //  {
    //      len++;
    //  }

    int len = strlen(str); // 记录以 /0 结尾的字符串长度
    bool is_palindrome = true;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}