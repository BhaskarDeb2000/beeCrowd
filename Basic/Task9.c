// Salary calculator
#include <stdio.h>
int main()
{
    int id, workHour;
    double payPerHour, salary;
    scanf("%d %d %lf", &id, &workHour, &payPerHour);

    salary = workHour * payPerHour;
    printf("NUMBER = %d\n", id);
    printf("SALARY = U$ %.2lf\n", salary);
    return 0;
}