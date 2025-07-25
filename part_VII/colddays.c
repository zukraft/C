// colddays.c -- вычисляет процент случаев, когда температура опускается ниже нуля
#include <stdio.h>
int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Введите список минимальных дневных температур.\n");
    printf("Испольуйте шкалу Цельсия; для завершения введите q.\n");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }
    if (all_days != 0)
        printf("%d - общее количество дней: %.1f%% с температурой ниже нуля.\n",
            all_days, 100.0 * (float) cold_days / all_days);
    else
        printf("Данные не введены!\n");

        return 0;
    
}