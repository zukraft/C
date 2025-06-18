/* shoes1.c -- преобразует размер обуви в дюймы */
#include <stdio.h>
#define ADJUST 7.31     //один из видов символической константы
int main(void)
{
    const double SCALE = 0.333;     //еще один вид символической константы
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;

    printf("Размер обуви (мужской) длина ступни\n");
    printf("%10.1f %20.2f дюймов\n", shoe, foot);

    return 0;
}