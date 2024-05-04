#include <stdio.h>
int main()
{
    double gradeA = 3.5;
    double gradeB = 7.5;
    double a, b, MEDIA;
    scanf("%lf\n%lf", &a, &b);
    MEDIA = ((a * gradeA) + (b * gradeB)) / (gradeA + gradeB);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}