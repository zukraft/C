/* print1.c -- демонстрирует некоторые свойства функции printf() */
#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Выполняется правильно: ");
    printf("%d минус %d равно %d\n", ten, 2, ten - two);
    printf("Выполняется неправильно: ");
    printf("%d минус %d равно %d\n", ten); // пропущены 2 аргумента

    return 0;

}