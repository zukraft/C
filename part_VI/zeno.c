/* zenoc. -- сумма последовательности */
#include <stdio.h>
int main(void)
{
    int t_ct; //счетчик элементов
    double time, power_of_2;
    int limit;

    printf("Введите желаемое кол-во элементов последовательности: ");
    scanf("%d", &limit);
    for (time=0, power_of_2=1, t_ct=1; t_ct <= limit;
        t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0/power_of_2;
        printf("время = %f, когда кол-во элементов = %d.\n", time, t_ct);
    }
    return 0;
}