// truth.c -- какие значения являются истинными
#include <stdio.h>
int main(void)
{
    int n = 3;

    while (n)
        printf("%2d является истинным\n", n--);
    printf("%2d является ложным\n", n);

    n = -3;
    while (n)
        printf("%2d является истинным\n", n++);
    printf("%2d является ложным\n", n);

    return 0;  
    
}