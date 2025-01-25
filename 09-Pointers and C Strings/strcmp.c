#include <stdio.h>

int StrCmp(const char *s1, const char *s2);
int StrCmpStd(const char *s1, const char *s2);
// strcmp标准库
int StrNCmp(const char *s1, const char *s2, int n);
// 比较前n个字符

int main()
{
    const char *str1 = "hi, C";
    const char *str2 = "hi, c";
    printf("StrCmp(\"%s\", \"%s\") = %d\n", str1, str2, StrCmp(str1, str2));

    return 0;
}

int StrCmp(const char *s1, const char *s2)
{
    while (*s1 == *s2 && (*s1 != '\0' && *s2 != '\0'))
    {
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 == '\0')
        return 0;

    return (*(const unsigned char *)s1) < (*(const unsigned char *)s2) ? -1 : 1;
    // return *s1 - *s2;
    //    char: unsigned char, signed char
    //    溢出风险
}

int StrCmpStd(const char *s1, const char *s2)
{
    for (; *s1 == *s2; s1++, s2++)
    {
        if (*s1 == '\0')
            return 0;
    }
    return (*(const unsigned char *)s1) < (*(const unsigned char *)s2) ? -1 : 1;
}

int StrNCmp(const char *s1, const char *s2, int n)
{
    for (; 0 < n; n--, s1++, s2++)
    {
        if (*s1 != *s2)
            return (*(const unsigned char *)s1) < (*(const unsigned char *)s2) ? -1 : 1;
        else if (*s1 == '\0')
            return 0;
    }
    return 0;
}