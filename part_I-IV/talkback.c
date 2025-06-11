// talkback.c -- любопытная информативная программа
#include <stdio.h>
#include <string.h> // для прототипа функции strlen()
#define DENSITY 62.4    // удельная масса человека в фунтах на кубический фут
int main()
{
    float weight, volume;
    int size, letters;
    char name[40]; //name представляет собой массив из 40 символов

    printf("Здравствуйте! Как вас зовут?\n");
    scanf("%s", name);
    printf("%s, сколько вы весите в фунтах?\n", name);
    scanf("%f", &weight);
    size = sizeof name;
    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Хорошо, %s, ваш объем составляет %2.2f кубических футов.\n", name, volume);
    printf("К тому же ваше имя состоит из %d букв и %d символов, \n", letters, letters);
    printf("и мы располагаем 40 байтами для его хранения.\n", size);

    return 0;
}