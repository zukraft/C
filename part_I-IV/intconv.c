/* intconv.c -- несоответствия при преобразовании целочисе=ленных типов */
 #include <stdio.h>
 #define PAGES 336
 #define WORDS 65618
 int main(void)
 {
    short num = PAGES;
    short mnum = -PAGES;

    printf("num как тип short и тип unsigned short: %hd %hu\n", num, num);
    printf("-num как тип short и тип unsigned short: %hd %hu\n", mnum, mnum);
    printf("num как тип int и тип char: %d %c\n", num, num);
    printf("WORDS как тип int, short и char: %d %hd %c \n", WORDS, WORDS, WORDS);

    return 0;
 }