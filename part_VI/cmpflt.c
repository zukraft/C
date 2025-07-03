/* cmpflt.c -- сравнение чисел с плавающей запятой */
#include <math.h>
#include <stdio.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("Каково значение числа pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("Введите значение еще раз.\n");
        scanf("%lf", &response);
    }
    printf("Достаточно близко!\n");

    return 0;
    
}