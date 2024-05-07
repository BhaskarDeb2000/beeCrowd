#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void specifics()
{
    int x, y;
    float specifics[] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};
    scanf("%d\n%d", &x, &y);
    printf("Total: R$ %.2f\n", specifics[x] * y);
}

int main()
{
    int x, y;
    specifics();
    return 0;
}