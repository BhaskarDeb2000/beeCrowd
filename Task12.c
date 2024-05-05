// Volume of Sphere

#include <stdio.h>
int main()
{
    int r;
    const double pi = 3.14159;
    scanf("%d", &r);
    double volume = (4.0 / 3) * pi * r * r * r;
    printf("VOLUME = %.3f\n", volume);
    return 0;
}