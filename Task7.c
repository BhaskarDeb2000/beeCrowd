// Grade Average Counter 2

#include <stdio.h>
int main()
{
    double a, b, c, MEDIA;
    int gradeA = 2;
    int gradeB = 3;
    int gradeC = 5;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    MEDIA = ((a * gradeA) + (b * gradeB) + (c * gradeC)) / (gradeA + gradeB + gradeC);

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}