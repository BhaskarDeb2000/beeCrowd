// Salary Calculator with Bonus

#include <stdio.h>
int main()
{
    char firstName[15];
    double salary, payPerHour;
    scanf("%s\n%lf\n%lf", firstName, &salary, &payPerHour);
    printf("TOTAL = R$ %.2f\n", salary + (payPerHour * 0.15));

    return 0;
}