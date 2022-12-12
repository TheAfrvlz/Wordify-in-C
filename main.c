#include <stdlib.h>
#include <stdio.h>
#include "Word.h"

int main(int argc, char **argv)
{
    char *Main = "Hello";
    char *txt1 ="erfsdgsd sgsdfgd ergerg ergerge";
    char *txt = "Hello \nWorld \nfrom  \nI am your father \nWelcome to \nFuck the \nSociety";
    char *h1 = "Hello";
    char *h2 = " World!";
    char *St = "12345";
    char l = '6';
    // char Up = 'H';
    // char Low = 'h';

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
    CompareStringW(Main, h1);
    LinesAddress(txt);
    printf("the word %s is %d in %s", txt1,FindString(txt1,Main),Main);
    return 0;
}