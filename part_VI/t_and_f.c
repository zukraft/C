/* t_and_f.c -- истинные и ложные значения в языке C */
#include <stdio.h>
int main(void)
{
    int true_val, false_val;
    true_val = (10 > 2);    //значение истинного отношения
    false_val = (10 == 2);  //значение ложного отношения
    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}