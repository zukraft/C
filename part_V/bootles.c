/* bootles.c -- иллюстрация префиксной модели и постфиксной модели */
#include <stdio.h>
#define MAX 10
int main(void)
{
    int count = MAX + 2;
    printf("%d\n", count);
    while (--count > 0)
    {
        printf("%d бутылок родниковой воды на полке, "
        "%d бутылок родниковой воды!\n", count, count);
        printf("%d\n", count);
        printf("Возьмите одну из них и пустите по кругу, \n");
        printf("%d бутылок родниковой воды!\n\n", count - 1);
    }
    return 0;
}