/* width.c -- поля разной ширины */
#include <stdio.h>
#define PAGES 23959
int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%20d*\n", PAGES);
    printf("*%-14d*\n", PAGES);

    return 0;
}