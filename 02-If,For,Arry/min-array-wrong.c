#include <stdio.h>

int main()
{
    const int NUM = 5;
    int numbers[NUM] = {23, 56, 19, 11, 78}; // 这五个字的顺序是：0，1，2，3，4

    return 0;
}
/*
 * 这样是错误的，因为定义数字时可用变量，
 * 但定义数组时要用常量，而上面这种是可变长数组（即使定义了NUM），
 * 对可变长数组不能同时对它初始化
 */

/* 修改方式是将 定义NUM 改为预处理指令 */

/*
 *   #include <stdio.h>
 *
 *   #define NUM 5
 *   int main()
 *   {
 *       int numbers[NUM] = {23, 56, 19, 11, 78};
 * 
 *       return 0;
 *   }
 */