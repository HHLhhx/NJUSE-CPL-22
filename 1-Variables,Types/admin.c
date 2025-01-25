#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char first_name[] = "Tayu";
    char last_name[] = "Lo";
    char gender = 'm';
    /*
     * char: 单个字符;
     * 多字符用"",单字符用''
     * []: 字符所构成的数组或序列
     */

    int birth_year = 1954;
    int birth_month = 7;
    int birth_day = 20;
    char weekday[] = "Tuesday";

    int c_score = 50;
    int music_score = 99;
    int medicine_score = 78;

    double mean = (c_score + music_score + medicine_score) / 3.0;
    double sd = sqrt((pow(c_score - mean, 2) + pow(music_score - mean, 2) + pow(medicine_score - mean, 2)) / 3.0);
    int rank = 10;
    // sqrt: 求方差(属于<ctype.h>函数库)

    printf("%s %s \t %c\n"
           "%.2d-%.2d-%.2d \t %.3s.\n"
           "%d \t %d \t %d\n"
           "%.1f \t %.2f   %d%%\n",
           first_name, last_name, toupper(gender),
           birth_month, birth_day, birth_year, weekday,
           c_score, music_score, medicine_score,
           mean, sd, rank);
    // \t: Tab大空格
    // toupper(): 小写转大写
    // %_._s: 输出字符串，后一个_表示输出几个字符; %c: 输出单字符
    // %_._d: 后一个_表示至少输出几位数字
    // %%: 输出一个%

    return 0;
}