// Grade Average Counter

#include <stdio.h>
int main()
{
    double gradeA = 3.5;
    double gradeB = 7.5;
    double A, B, MEDIA;
    scanf("%lf\n%lf", &A, &B);
    MEDIA = ((A * gradeA) + (B * gradeB)) / (gradeA + gradeB);
    printf("MEDIA = %.5lf\n", MEDIA);
    return 0;
}