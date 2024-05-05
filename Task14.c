#include <stdio.h>
int main()
{
    int distance;
    double fuelSpent;
    scanf("%d\n%lf", &distance, &fuelSpent);
    double consumption = distance / fuelSpent;
    printf("%.3lf km/l\n", consumption);

    return 0;
}