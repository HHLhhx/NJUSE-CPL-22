/* 结合renew-selection-sort.c理解实参与形参的概念 */
#include <stdio.h>
#include <stdbool.h>

bool IsLeapYear(int year); // 把函数声明放在前面，把函数具体实现放在main函数后面

int main()
{
    // year: in the main function: local variable
    // scope (life time)
    int year = 0;
    scanf("%d", &year);

    // year: actual argument(实参)
    bool leap = IsLeapYear(year);
    // "实参"将参数值"赋值"给"形参"，在函数体内对"形参"进行处理
    // In C, pass by value(传值)
    // 例如year输入值为2022，则在第33行对year进行赋值 year = 2022

    if (!leap) // leap 相当于 leap != true
    {
        printf("The year %d is a common year.\n", year);
    }
    else
    {
        printf("The year %d is a leap year.\n", year);
    }

    return 0;
}

// scope(作用域) as a local variable[在该函数内可访问或修改该参数]
// year：formal parameter(形参)
bool IsLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}