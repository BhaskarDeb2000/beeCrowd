// Value to Pay

#include <stdio.h>
int main()
{
    int productCode1, amount1, productCode2, amount2;
    double price1, price2, value;
    scanf("%d\t%d\t%lf", &productCode1, &amount1, &price1);
    scanf("%d\t%d\t%lf", &productCode2, &amount2, &price2);
    value = (amount1 * price1) + (amount2 * price2);
    printf("VALOR A PAGAR: R$ %.2f\n", value);
    return 0;
}