// prntval.c -- выяснение возвращаемого значения функции printf()
#include <stdio.h>
int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("Вода закипает при %d градусах по Фаренгейту.\n", bph2o);
    printf("Функция printf() вывела %d символов.\n", rv);

    return 0;
}