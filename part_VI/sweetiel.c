//sweetiel.c -- цикл со счетчиком
#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count = 1;      //инициализация

    while (count <= NUMBER)     //проверка
    {
        printf("Будь мои другом!\n");   //действие
        count++;                        //обновление значения count
    }

    return 0;
    
}