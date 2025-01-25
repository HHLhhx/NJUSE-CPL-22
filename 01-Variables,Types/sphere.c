#include <stdio.h>
#include <math.h>
int main()
{
    const double PI = 3.14159;
    int radius = 100;

    double surface_area = 4 * PI * pow(radius, 2);
    // surface_area = surfaceArea 多字符表示
    double volume = 4.0 / 3.0 * PI * pow(radius, 3);
    // pow(X, Y): X^Y

    printf("%-15.4f : surface_area\n%-15.4f : volume\n",
           surface_area, volume);
    /*
     * %_._f: 前一个_表示至少预留几位字符: 后一个_表示保留几位小数;
     * 默认右对齐，在第一个_前加上-表示左对齐
     */

    return 0;
}