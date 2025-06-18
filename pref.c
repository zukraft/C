/* pref.c -- демонстрация приоритета */
#include <stdio.h>
int main(void)
{
    int y, n, num;
    y = 1;
    n = 5;
    num = (y + ++n) * 6;
    printf("%d %5d %10d\n", y, n, num);

    return 0;
}