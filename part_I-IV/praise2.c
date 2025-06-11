/* praise2.c -- использует различные представления строк */
// Если ваша реализация не распознает спецификатор %zd,
// попробуйте использовать %u или %ul
#include <stdio.h>
#include <string.h> /* предоставляет прототип strlenf() */
#define PRAISE "Вы - выдающаяся личность."
int main(void)
{
    char name[40];
    printf("Как вас зовут? ");
    scanf("%s", name);
    printf("Здравствуйте, %s. %s\n", name, PRAISE);
    printf("Ваше имя состоит из %zd символов и занимает %zd ячеек памяти.\n", strlen(name), sizeof name);
    printf("Хвалебная фраза содержит %zd символов", strlen(PRAISE));
    printf("и занимает %zd ячеек памяти.\n", sizeof PRAISE);

    return 0;
}