// sizeof.c -- использование операции sizeof
// в примере применяется определенный в стандарте c99 модификатор %z
// если в вашей системе модификатор %zd не поддерживается, попробуйте вместо него %u или %lu
#include <stdio.h>
int main(void)
{
    int n = 0;
    size_t intsize;
    intsize = sizeof (int);

    printf("n = %d, n состоит из %zd байтов; все значения int имеют %zd байтов.\n", n, sizeof n, intsize);

    return 0;
}