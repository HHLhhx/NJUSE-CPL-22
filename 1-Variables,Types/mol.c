#include <stdio.h>

int main()
{
    const double MOL = 6.02e23;
    const int MOL_PER_GRAM = 32;
    int mass = 6;

    double quantity = mass * 1.0 / MOL_PER_GRAM * MOL;
    // 以初始化的字符串 * 1.0: 以小数形式输出

    printf("quantity = %.3e\nquantity = %.5g\n",
           quantity, quantity);
    // %_._e: 科学计数法; %_._g: 后一个_表示保留几位有效数字

    return 0;
}