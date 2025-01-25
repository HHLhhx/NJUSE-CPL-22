/* char的范围很小，不要用char表示int类型 */
#include <stdio.h>

int main()
{
    char c = 150;
    int i = 900;

    printf("i / c = %d\n", i / c);

    return 0;
}
