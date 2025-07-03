/* for_cube.c -- использование цикла for для построения таблицы кубов */
#include <stdio.h>
int main(void)
{
    int num;
    printf("   n  n в кубе\n");
    for (num = 1; num <= 9; num++)
        printf("%5d %5d\n", num, num*num*num);

    return 0;
}