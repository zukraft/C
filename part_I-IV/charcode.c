/* charcode.c -- отображает кодовое значение символа */
#include <stdio.h>
int main(void)
{
    char ch;
    printf("Введите какой-нибудь символ.\n");
    scanf("%c", &ch); /* пользователь вводит символ */
    printf("Код символа %c равен %d.\n", ch, ch);

    return 0;
}