#include <stdio.h>
int main()
{
    double A, B, C, MEDIA;
    int gradeA = 2;
    int gradeB = 3;
    int gradeC = 5;
    scanf("%lf\n%lf\n%lf", &A, &B, &C);
    MEDIA = ((A * gradeA) + (B * gradeB) + (C * gradeC)) / (gradeA + gradeB + gradeC);

    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}