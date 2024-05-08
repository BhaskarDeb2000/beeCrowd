#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int cash;
    scanf("%d", &cash);
    int hundredNotes = cash / 100;
    int fiftyNotes = (cash % 100) / 50;
    int twentyNotes = ((cash % 100) % 50) / 20;
    int tenNotes = (((cash % 100) % 50) % 20) / 10;
    int fiveNotes = ((((cash % 100) % 50) % 20) % 10) / 5;
    int twoNotes = (((((cash % 100) % 50) % 20) % 10) % 5) / 2;
    int oneNotes = ((((((cash % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    printf("%d\n", cash);
    printf("%d nota(s) de R$ 100,00\n", hundredNotes);
    printf("%d nota(s) de R$ 50,00\n", fiftyNotes);
    printf("%d nota(s) de R$ 20,00\n", twentyNotes);
    printf("%d nota(s) de R$ 10,00\n", tenNotes);
    printf("%d nota(s) de R$ 5,00\n", fiveNotes);
    printf("%d nota(s) de R$ 2,00\n", twoNotes);
    printf("%d nota(s) de R$ 1,00\n", oneNotes);
    return 0;
}