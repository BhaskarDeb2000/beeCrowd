#include <stdio.h>
int main()
{
    double a, result;
    const double x = 3.14159;
    scanf("%lf", &a);
    result = x * a * a;
    printf("A=%.4f\n", result);
    return 0;
}