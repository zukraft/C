/* escape.c -- использование управляющих последовательностей */
#include <stdio.h>
int main(void)
{
    float salary;
    char text = 'H';
    
    printf("\aВведите желаемую сумму месячной зарплаты:\n "); /* 1 */
    printf("$_______\b\b\b\b\b\b\b");               /* 2 */
    scanf("%f", &salary);
    printf("%f", salary); // проверяем значение
    printf("\n\t$%.2f в месяц соответствует $%.2f в год.", salary, salary*12.0);  /* 3 */
    printf("\rOгo!\n");
    printf("%c %d\n", text, text);                                     /* 4 */

    return 0;
}