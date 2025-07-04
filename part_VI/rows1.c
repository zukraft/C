/* rows1.c -- применение вложенных циклов */
#include <stdio.h>
#define ROWS 6
#define CHARS 10
int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)  /* строка 10 */
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)  /* строка 12 */
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}