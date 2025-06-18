/* min_sec.c -- переводит секунды в минуты и секунды */
#include <stdio.h>
#define SEC_PER_MIN 60  //количество секунд в минуте
int main(void)
{
    int sec, min, left;

    printf("перевод секунд в минуты и секунды!\n");
    printf("Введите количество секунд (<=0 для выхода):\n");

    scanf("%d", &sec);  //чтение количества секунд

    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;    //усеченное количество минут
        left = sec % SEC_PER_MIN;   //количество секунд в остатке
        printf("%d секунд - это %d минут(ы) %d секунд.\n", sec, min, left);
        printf("Введите следующее значение (<=0 для выхода):\n");

        scanf("%d", &sec);
    }
    printf("Готово!\n");
    
    return 0;
}