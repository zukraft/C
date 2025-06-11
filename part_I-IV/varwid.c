/* varwid.c -- использование поля вывода переменной ширины */
#include <stdio.h>
int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Введите ширину поля:\n");
    scanf("%d", &width);
    printf("Значение равно: %*d:\n", width, number);
    printf("Теперь введите ширину и точность:\n");
    scanf("%d %d", &width, &precision);
    printf("Вес = %*.*f\n", width, precision, weight);
    printf("Готово!\n");

    return 0;
}