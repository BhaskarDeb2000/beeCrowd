#include <stdio.h>
int main()
{
    double a, result;
    const double n = 3.14159;
    scanf("%lf", &a);
    result = n * a * a;
    printf("A=%.4f\n", result);
    return 0;
}