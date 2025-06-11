/* showf_pt.c -- отображает значение типа float двумя способами */
#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f может быть записано как %e\n", aboat, aboat);
    //для вывода следующей строки требуется компилятор,
    //поддерживающий C99 или более поздний стандарт
    printf("И его %a в шестнадцатеричной, представляющей степени 2, форме записи\n", aboat);
    printf("%Lf может быть записано как %Le\n", dip, dip);

    return 0;
}