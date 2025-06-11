/* stilbad.c -- программа с устраненными синтаксическими ошибками */
#include <stdio.h>
int main(void)
{
    int n, n2, n3;
    /* в этой программе допущено несколько ошибок*/
    n = 5;
    printf("n = %d\n", n);
    n2 = n * n;
    printf("n2 = %d\n", n2);
    n3 = n * n2;
    printf("n3 = %d\n", n3);
    printf("n = %d, в квадрате = %d, n в кубе = %d\n", n, n2, n3);
    return 0;
}