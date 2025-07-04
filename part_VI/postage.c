//postage.c -- тарифы почтового обслуживания первого класса
#include <stdio.h>
int main(void)
{
    const int FIRST_OZ = 46; //тариф 2013 года
    const int NEXT_OZ = 20; //тариф 2013 года
    int ounces, cost;

    printf("  унции  тариф\n");
    for (ounces=1, cost=FIRST_OZ; ounces <= 16; ounces++,
        cost += NEXT_OZ)
        printf("%5d $%4.2f\n", ounces, cost/100.0);

    return 0;
}