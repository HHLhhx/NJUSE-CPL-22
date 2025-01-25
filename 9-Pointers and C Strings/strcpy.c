#include <stdio.h>
#include <string.h>

void StrCpy(char *dest, const char *src);
void StrCpy1(char *dest, const char *src);
void StrCpy2(char *dest, const char *src);
void StrCpy3(char *dest, const char *src);
void StrCpy4(char *dest, const char *src);
void StrCpy5(char *dest, const char *src);
char *StrCpyStd(char *dest, const char *src);
// strcpy标准库

int main()
{
    const char *src = "Hello World";
    // 动态申请内存时需要malloc 
    char dest[strlen(src) + 1];
    // +1是为了补'\0'的位数

    StrCpy(dest, src);
    printf("dest = %s\n", dest);

    return 0;
}

void StrCpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    // 没有拷贝'\0'，打印dest时找不到何时终止，会造成乱码
    dest[i] = '\0';
}

void StrCpy1(char *dest, const char *src)
{
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
        i++;
}

void StrCpy2(char *dest, const char *src)
{
    int i = 0;
    // dest[i] == *(dest + i)
    while ((*(dest + i) = *(src + i)) != '\0')
        i++;
}

void StrCpy3(char *dest, const char *src)
{
    while ((*dest = *src) != '\0')
    {
        src++;
        dest++;
    }
}

void StrCpy4(char *dest, const char *src)
{
    while ((*dest++ = *src++) != '\0')
        ;
    // 后缀++优先级高于*
    // dest++返回值为dest，然后再dest = dest + 1
}

// ! NOT recommended
void StrCpy5(char *dest, const char *src)
{
    // '\0': null character
    while ((*dest++ = *src++))
        ;
}

// 上述的写法改变了dest
// 下面标准库的写法返回char *方便主函数嵌套
char *StrCpyStd(char *dest, const char *src)
{
    for (char *s = dest; (*s++ = *src++) != '\0';)
        ;
    return dest;
}