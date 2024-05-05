#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int timeSpent, avgSpeed;
    scanf("%d %d", &timeSpent, &avgSpeed);

    printf("%.3f\n", (timeSpent * avgSpeed) / 12.0);

    return 0;
}