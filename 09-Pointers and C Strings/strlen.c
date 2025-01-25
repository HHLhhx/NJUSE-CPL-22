#include <stdio.h>

int Strlen(const char *s);
size_t StrlenStd(const char *s);
// strlen标准库

int main()
{
    char msg[20] = "Hello World!";
    printf("%s\n", msg);

    msg[0] = 'N';
    printf("%s\n", msg);

    // char *ptr_msg = "Hello World!";
    // ptr_msg[0] = 'N';
    // printf("%s\n", msg);
    //    string literal(字符串字面量)
    //    may be stored in read-only memory
    //    即：用 char * 定义字符串时，不能修改，否则会有undefined behavior

    printf("Strlen(%s) = %d\n", msg, Strlen(msg));
    printf("%d\n", StrlenStd(msg));

    return 0;
}

int Strlen(const char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

size_t StrlenStd(const char *s)
{
    const char *sc;
    for (sc = s; *sc != '\0'; sc++)
        ;
    return (sc - s);
    // 含义：指针sc和s间隔了多少个元素
}