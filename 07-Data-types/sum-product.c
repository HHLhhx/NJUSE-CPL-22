/* float有误差 */
#include <stdio.h>

int main()
{
    float f = 0.1F;
    float sum = 0.0F;

    for (int i = 0; i < 10; i++)
    {
        sum += f;
    }

    float product = f * 10;

    printf("sum = %.15f\nmul = %.15f\n", sum, product);

    return 0;
}