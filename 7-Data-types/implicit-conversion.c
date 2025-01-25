#include <stdio.h>
#include <limits.h>

int SquareInt(int nun);
double SquareDouble(double num);

int main()
{
    // narrowing conversion (still in the range)
    int i = 3.14159;
    // i == 3

    // out of the range: undefined behavior!!!
    int j = UINT_MAX;

    // arguments; narrowing conversion
    double k = 3.14159;
    SquareInt(k);

    // return value; narrowing conversion
    int m = SquareDouble(k);
    // m == 9

    return 0;
}

int SquareInt(int num)
{
    return num * num;
}

double SquareDouble(double num)
{
    return num * num;
}