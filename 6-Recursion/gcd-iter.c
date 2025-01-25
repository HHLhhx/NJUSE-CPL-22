#include <stdio.h>

int main()
{
    int a;
    int b;
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int temp_a = a;
        a = b;
        b = temp_a % b;
    }
    printf("%d", a);

    return 0;
}