// defines.c -- использует именованные константы из файла limit.h и тип float
#include <stdio.h>
#include <limits.h>     // пределы для целых чисел
#include <float.h>      // пределы для чисел с плавающей точкой
int main(void)
{
    printf("Некоторые пределы чисел для данной системы:\n");
    printf("Наибольшее значение типа int: %d\n", INT_MAX);
    printf("Наибольшее значение типа char: %d\n", CHAR_MAX);
    printf("Наименьшее значение типа long long: %lld\n", LLONG_MIN);
    printf("В даннной системе один байт: %d битов.\n", CHAR_BIT);
    printf("Наибольшее значение типа double: %e\n", DBL_MAX);
    printf("Наименьшее нормализованное значение числа типа float: %e\n", FLT_MIN);
    printf("Точность значений типа float = %d знаков\n", FLT_DIG);
    printf("Разница между 1.00 и минимальным значением float, которое больше 1.00 = %e\n", FLT_EPSILON);

    return 0;
}