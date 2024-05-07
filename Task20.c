#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int input;
    scanf("%d", &input);
    int hour = input / 3600;
    int minutes = (input % 3600) / 60;
    int seconds = (input % 60);
    printf("%d:%d:%d\n", hour, minutes, seconds);
    return 0;
}