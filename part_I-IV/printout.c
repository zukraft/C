/* printout.c -- использует спецификатор преобразования */
#include <stdio.h>
#define PI 3.141593
int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;
    
    printf("%d участников соревнований съели %f пирожков с вишнями.\n", number, pies);
    printf("Значение pi равно %f.\n", PI);
    printf("До свиданья! Ваше искусство слишком дорого обходится,\n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}