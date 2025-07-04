/* do_while.c -- цикл с постусловием */
#include <stdio.h>
int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("Чтобы войти в клуб лечения трискадекафобии,\n");
        printf("пожалуйста, введите секретный код: ");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Поздравляем! Вас вылечили!\n");

    return 0;
    
}