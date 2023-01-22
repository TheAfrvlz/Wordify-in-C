#ifndef STRINGIFY_H_INCLUDED
#define STRINGIFY_H_INCLUDED

#include <stdlib.h>
#include "Word.c"

typedef unsigned char boolean;

//TODO:Implement for Release v1.3
// typedef struct Text{
//     unsigned char* Text_Name;
//     unsigned int*  Text_Rows;
//    unsigned char* Text_Content;
// };

#define True (boolean)1u
#define False (boolean)0u

int Texlen(unsigned char *StringC, char StopC);
void      LinesAddress(unsigned char *Principal_Text);
unsigned char *AppendW(unsigned char *Principal_Text, unsigned char *Word);
unsigned char *AppendL(unsigned char *Principal_Text, unsigned char Letter);
unsigned int  numLines(unsigned char *Principal_Text);
unsigned char  *toUpperCaseWord(unsigned char  *Word);
unsigned char toUpperCaseLetter(unsigned char Letter);
unsigned char  *toLowerCaseWord(unsigned char  *Word);
unsigned char toLowerCaseLetter(unsigned char Letter);
void CompareStringW(unsigned char *StringRef, unsigned char *Word2Compare);
void ClearT(unsigned char *Text);
boolean FindLetter(unsigned char Letter2Find, unsigned char *A2Find, unsigned char StopC);
boolean   FindWord(unsigned char  *Word2Find, unsigned char *A2Find, unsigned char StopC);
boolean FindSymbol(unsigned char Symbol2Find, unsigned char *A2Find, unsigned char StopC);
void ReplaceW(unsigned char *OriginString, unsigned char *toReplace, unsigned char *newS);
unsigned char *getAfterW      (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
unsigned char *getBeforeW     (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
unsigned char *getAfterSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Symbol, unsigned char StopC);
unsigned char *getBeforeSymbol(unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Symbol, unsigned char StopC);
unsigned char *getAfterchar   (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Letter, unsigned char StopC);
unsigned char *getBeforechar  (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Letter, unsigned char StopC);
//TODO: Implement for Release v1.3
boolean RegexFind(unsigned char *Regex, unsigned char *A2Find, unsigned char StopC);
// void DeleteSpace(char *StringC, char StopC);
// unsigned char *getBeforeLine(int line);
// unsigned char *getAfterLine(int line);
// unsigned char *getLine(int line);
// unsigned char *getBetweenSymbol(char *StartAddC,char *symbol);
// void ShiftLeftString(char *lineAdd, int len, char *String2Shift);
// void ShiftRightString(char *lineAdd, int len, char *String2Shift);
// int W2I(unsigned char*Ref);
// unsigned char* I2W(int Var);
#endif