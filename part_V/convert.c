/* convert.c -- автоматическое преобразование типов */
#include <stdio.h>
int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C';                                  /* строка 9 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* строка 10 */
    ch = ch + 1;                                        /* строка 11 */
    i = fl + 2 * ch;                                    /* строка 12 */
    fl = 2.0 * ch + i;                                  /* строка 13 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* строка 14*/
    ch = 1107.0;                                        /* строка 15 */
    printf("Теперь ch = %c\n", ch);                     /* строка 16 */
    ch = 80.89;                                         /* строка 17 */
    printf("Теперь ch = %c\n", ch);                     /* строка 18 */

    return 0;
}