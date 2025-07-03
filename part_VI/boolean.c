// bolean.c -- использование переменной типа _Bool
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;      /* инициализация переменной sum нулем */
    _Bool input_is_good;

    printf("Введите целое число для последующего суммирования ");
    printf("(или q для завершения программы): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good) 
    {
        sum = sum + num;
        printf("Введите следующее целое число (или q для завершения программы): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Сумма введеных целых чисел равна %ld.\n", sum);

    return 0;
}