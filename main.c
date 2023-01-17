#include <stdlib.h>
#include <stdio.h>
#include "Word.h"

int main(int argc, char **argv)
{
    char *Main = "Hello";
    char *txt1 = "erfsdgsd sgsdfgd ergerg ergerge";
    char *txt = "Hello Jesus\nWorld\nfrom\nI am your father\nWelcome to\nFuck the\nSociety";
    char *h1 = "Hello";
    char *h2 = " World!";
    char *St = "12345";
    char l = '6';
    char Up = 'H';
    char Low = 'h';

    printf("%s :before append\n", St);
    printf("%s :after append\n", AppendL(St, l));
    printf("%s :new Text\n", AppendW(h1, h2));
    printf("%d :Lenght\n", Texlen(St, '\0'));
    printf("%d :Lenght\n", Texlen(h1, '\0'));
    printf("%d :Num of Lines\n", numLines(txt));
    printf("%d :Num of Lines\n", numLines(h1));
    printf("%s :normal\n", h1);
    printf("%s :Upper\n", toUpperCaseW(h1));
    printf("%s :low\n", toLowerCaseW(h1));
    printf("----------------------------\n");
    CompareStringW(Main, h1);
    printf("----------------------------\n");
    LinesAddress(txt);
    printf("the word %s is %d in %s", txt1, FindString(txt1, Main,'\0'), Main);
    printf("----------------------------\n");
    getAfterW(0,txt,Main,'\n');
    printf("The pattern was %s", (RegexFind("/[A-Z]{12}/", Main,'\0') == 1u ? "found" : "not found") );


    // int i;
    // int total = 100;
    // for (i = 0; i <= total; i++) {
    //     printf("Progress: [");
    //     int j;
    //     for (j = 0; j < i; j++) {
    //         printf(".");
    //     }
    //     for (j = i; j < total; j++) {
    //         printf(" ");
    //     }
    //     printf("] %d%%\r", i);
    //     fflush(stdout);
    //     usleep(100000);
    //     printf("\033");
    // }
    // printf("\n");



    return 0;
}