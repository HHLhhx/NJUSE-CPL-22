#include <stdio.h>
#include <float.h>

int main()
{
    printf("FLT_MAX = %e\n", FLT_MAX);
    printf("FLT_MIN = %e\n", FLT_MIN);
    printf("FLT_TRUE_MIN = %e\n", FLT_TRUE_MIN);
    printf("FLT_EPSILON = %e\n\n", FLT_EPSILON);

    printf("DBL_MAX = %e\n", DBL_MAX);
    printf("DBL_MIN = %e\n", DBL_MIN);
    printf("DBL_TRUE_MIN = %e\n", DBL_TRUE_MIN);
    printf("DBL_EPSILON = %e\n", DBL_EPSILON);

    return 0;
}