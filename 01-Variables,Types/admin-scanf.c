#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
      char first_name[10];
      char last_name[10];
      char gender;
      /*
       * []里面的数字表示能容纳的字符串数,
       * 但C语言会自动在所输入的字符串后加入\0,
       * 即[]里的数实际应大于等于所输入字符串+1
       */

      int birth_year;
      int birth_month;
      int birth_day;
      char weekday[] = "Tuesday";

      int c_score;
      int music_score;
      int medicine_score;
      int rank;

      scanf("%9s%9s %c %d-%d-%d %9s %d%d%d %*lf%*lf %d%%",
            first_name, last_name, &gender,
            &birth_year, &birth_month, &birth_day, weekday,
            &c_score, &music_score, &medicine_score,
            &rank);
      // &: 表示取gender所在的地址,但有[]不需要
      // %s: 匹配输入时会忽略空白符
      // %c: 匹配输入时不会忽略空白符
      // *: 只识别但不保存

      double mean = (c_score + music_score + medicine_score) / 3.0;
      double sd = sqrt((pow(c_score - mean, 2) + pow(music_score - mean, 2) + pow(medicine_score - mean, 2)) / 3.0);

      printf("%s %s \t %c\n"
             "%.2d-%.2d-%.2d \t %.3s.\n"
             "%d \t %d \t %d\n"
             "%.1f \t %.2f   %d%%\n",
             first_name, last_name, toupper(gender),
             birth_month, birth_day, birth_year, weekday,
             c_score, music_score, medicine_score,
             mean, sd, rank);

      return 0;
}