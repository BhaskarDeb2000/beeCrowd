#include <stdio.h>
int main()
{
    double baseA, sideB, heightC;
    const double pi = 3.14159;
    scanf("%lf\t%lf\t%lf", &baseA, &sideB, &heightC);
    double area = (baseA * heightC) / 2;
    double circleArea = pi * heightC * heightC;
    double trapeziumArea = ((baseA + sideB) / 2) * heightC;
    double squareArea = sideB * sideB;
    double rectangleArea = baseA * sideB;
    printf("TRIANGULO: %.3lf\n", area);
    printf("CIRCULO: %.3lf\n", circleArea);
    printf("TRAPEZIO: %.3lf\n", trapeziumArea);
    printf("QUADRADO: %.3lf\n", squareArea);
    printf("RETANGULO: %.3lf\n", rectangleArea);
    return 0;
}