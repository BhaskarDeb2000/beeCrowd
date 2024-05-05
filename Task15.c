#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    scanf("%d\n%d\n%d", &a, &b, &c);
    int MajorAB = (a + b + abs(a - b)) / 2;
    int MajorABC = (MajorAB + c + abs(MajorAB - c)) / 2;
    printf("%d eh o maior\n", MajorABC);
    return 0;
}