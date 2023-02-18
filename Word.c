#include "Word.h"

typedef unsigned char boolean;
#define True (boolean)1u
#define False (boolean)0u

int *LinePos;


int Texlen(unsigned char *Principal_Text, char StopC)
{
    int len = 0;
    while (*(Principal_Text + len) != StopC)
    {
        len++;
    }
    return len;
}
void LinesAddress(unsigned char *Principal_Text)
{

    int Size = 1;
    int len = 0;

    LinePos = (int *)calloc(1, sizeof(int));
    LinePos[0] = 0;
    while (*(Principal_Text + len) != '\0')
    {
        if (*(Principal_Text + len) == '\n')
        {
            Size++;
            printf("Dim of Size: %d\n", Size);
            LinePos = (int *)realloc(LinePos, Size * sizeof(int));
            LinePos[Size - 1] = len + 1;
        }
        len++;
    }
    printf("After\n");
    for (int i = 0; i < Size; i++)
    {
        printf("%c content - %d Address, location in : %d\n", *(Principal_Text + LinePos[i]), (Principal_Text + LinePos[i]), LinePos[i]);
    }
}
unsigned int  numLines(unsigned char *Principal_Text)
{
    int lin = 1;
    int len = 0;
    while (*(Principal_Text + len) != '\0')
    {
        if (*(Principal_Text + len) == '\n')
        {
            lin++;
        }
        len++;
    }

    return lin;
}
unsigned char *AppendL(unsigned char *Principal_Text, unsigned char Letter)
{

    int StrLng = Texlen(Principal_Text, '\0');
    int size = StrLng + 1;

    char *buffer = (char *)calloc(size, sizeof(char));

    for (int i = 0; i < StrLng; i++)
        buffer[i] = Principal_Text[i];
    buffer[StrLng] = Letter;

    buffer[size] = '\0';

    printf("%c char added:\n", buffer[StrLng]);

    return buffer;
}
unsigned char *AppendW(unsigned char *Principal_Text, unsigned char *Word)
{

    int StrLng = Texlen(Principal_Text, '\0');
    int StrLng1 = Texlen(Word, '\0');
    int size = StrLng + 1 + StrLng1;

    char *buffer = (char *)calloc(size, sizeof(char));

    for (int i = 0; i < StrLng; i++)
        buffer[i] = Principal_Text[i];

    for (int i = 0; i < StrLng1; i++)
        buffer[i + StrLng] = Word[i];

    buffer[size] = '\0';

    return buffer;
}
unsigned char *toUpperCaseWord(unsigned char *Word)
{
    // 97 // 122
    int len = 0;
    int StrLng = Texlen(Word, '\0');
    char *buffer = (char *)calloc(StrLng, sizeof(char));

    int size = StrLng;
    while (*(Word + len) != '\0')
    {
        if ((*(Word + len) >= 'a' && *(Word + len) <= 'z') || (*(Word + len) >= 'A' && *(Word + len) <= 'Z'))
        {
            if ((*(Word + len) >= 'a' && *(Word + len) <= 'z'))
            {
                *(buffer + len) = *(Word + len) - 32;
            }
            else
            {
                *(buffer + len) = *(Word + len);
            }
        }

        len += 1;
    }
    return buffer;
}
unsigned char *toLowerCaseWord(unsigned char *Word)
{
    // 97 // 122
    int len = 0;
    int StrLng = Texlen(Word, '\0');
    char *buffer = (char *)calloc(StrLng, sizeof(char));

    int size = StrLng;
    while (*(Word + len) != '\0')
    {
        if ((*(Word + len) >= 'a' && *(Word + len) <= 'z') || (*(Word + len) >= 'A' && *(Word + len) <= 'Z'))
        {
            if ((*(Word + len) >= 'A' && *(Word + len) <= 'Z'))
            {
                *(buffer + len) = *(Word + len) + 32;
            }
            else
            {
                *(buffer + len) = *(Word + len);
            }
        }

        len += 1;
    }
    return buffer;
}
unsigned char     toUpperCaseL(unsigned char Letter)
{
    // 97 // 122
    char buffer;

    if ((Letter >= 'a' && Letter <= 'z') || (Letter >= 'A' && Letter <= 'Z'))
    {
        if ((Letter >= 'a' && Letter <= 'z'))
        {
            buffer = Letter - 32;
        }
    }
    return buffer;
}
unsigned char     toLowerCaseL(unsigned char Letter)
{
    // 97 // 122
    char buffer;
    if ((Letter >= 'a' && Letter <= 'z') || (Letter >= 'A' && Letter <= 'Z'))
    {
        if ((Letter >= 'A') && (Letter <= 'Z'))
        {
            buffer = Letter + 32;
        }
    }
    return buffer;
}
void CompareStringW(unsigned char *StringRef, unsigned char *Word2Compare)
{
    int len = 0;
    int StLen = Texlen(StringRef, '\0');
    while (len < (StLen - 1))
    {

        if (*(StringRef + len) == *(Word2Compare + len))
        {
            len++;
        }
        else
        {
            printf("Not Same\n");
            break;
        }
    }
}
void ClearT(unsigned char *Text)
{
    free(Text);
}
boolean FindLetter(unsigned char Letter2Find, unsigned char *A2Find, unsigned char StopC)
{
    boolean buffer = 0u;
    int len = 0;
    while (*(A2Find + len) != StopC)
    {
        if (*(A2Find + len) == Letter2Find)
        {
            buffer = 1u;
            break;
        }
        else
        {
            len++;
        }
    }

    return buffer;
}
boolean   FindWord(unsigned char *Word2Find, unsigned char *A2Find, unsigned char StopC)
{
    boolean buffer = 0u;
    int len = 0;
    while (*(Word2Find + len) != StopC)
    {
        if (*(Word2Find + len) == *(A2Find + 0))
        {
            buffer = 1u;
            break;
        }
        else
        {
            len++;
        }
    }

    return buffer;
}
boolean FindSymbol(unsigned char Symbol2Find, unsigned char *A2Find, unsigned char StopC)
{
    boolean buffer = 0u;
    int len = 0;
    while (*(A2Find + len) != StopC)
    {
        if (*(A2Find + len) == Symbol2Find)
        {
            buffer = 1u;
            break;
        }
        else
        {
            len++;
        }
    }

    return buffer;
}
boolean RegexFind(unsigned char *Regex, unsigned char *A2Find, unsigned char StopC)
{
    int len = 0;

    while (*(Regex + len) != StopC)
    {

        len++;
    }

    return 1u;
}
unsigned char *getAfterW(unsigned int WordCoincidences, unsigned int Line, unsigned char *StartAddC, unsigned char *ToFind, unsigned char StopC)
{
    unsigned char *Word = '\0';
    int Loop = 0;
    int ToFindLength = Texlen(ToFind, '\0');
    int CharReached = 0;
    int Coincidences = 0;
    int Recording_Word = 0;
    while (*(StartAddC + Loop + Line) != StopC)
    {

        if (ToFind[0] == StartAddC[Loop + Line] && Coincidences < WordCoincidences)
        {
            for (int CIText = 0; CIText < ToFindLength; CIText++)
            {
                //printf("%c | Was Found\n", StartAddC[Line + CIText]);
                if (StartAddC[Loop + Line + CIText] == ToFind[CIText])
                {
                    CharReached++;
                }
                else
                {
                    
                    break;
                }
            }
            if (CharReached == ToFindLength)
            {
                Coincidences++;
                while (*(StartAddC + Loop + Line + ToFindLength + Recording_Word) != StopC)
                {
                    printf("%c", StartAddC[Line + Loop + ToFindLength + Recording_Word]);
                    Recording_Word++;
                }
                printf("\n");
            }
        }

        Loop++;
    }

    return Word;
}
unsigned char *getBeforeW(unsigned int WordCoincidences,unsigned int Line, unsigned char *StartAddC, unsigned char *ToFind, unsigned char StopC)
{
    unsigned char *Word;
    int Loop = 0;
    while (*(StartAddC + Loop + Line) != StopC)
    {

        Loop++;
    }

    return Word;
}
void ReplaceW(unsigned char *OriginString, unsigned char *toReplace, unsigned char *newS)
{
}
void deleteFromInterval(unsigned int line, unsigned char *StartAddC, unsigned char **ArrayOfWordConcidences, unsigned char StopC){
    
}
// TODO
// void InsertBeforeWord (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
// void InsertAfterWord (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
// void InsertBeforeLetter (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
// void InsertAfterLetter (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
// void InsertBeforeSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
// void InsertAfterSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
// void DeleteSpace(char *StringC, char StopC){
//     while (*(StringC) != StopC)
//     {
//     }
// }

// unsigned char* getAfterSymbol(char *StartAddC, char S, char StopC){
//      unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getBeforeSymbol(char *StartAddC, char S, char StopC){
//      unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getAfterchar(char *StartAddC, char L, char StopC){
//      unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getBeforechar(char *StartAddC, char L, char StopC){
//     unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getBeforeLine(int line){
//      unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getAfterLine(int line){
//      unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getLine(int line){
//      unsigned char Var = ' ';
//     return &Var;
// }
// unsigned char* getWordBetweenSymbols(char *StartAddC,char *symbol){
//  unsigned char Var = ' ';
//     return &Var;
// }
// void ShiftLeftString(char *lineAdd, int len, char *String2Shift){
// }
// void ShiftRightString(char *lineAdd, int len, char *String2Shift){
// }
// int W2I(unsigned char* Ref){
//     return 0;
// }
// unsigned char* I2W(int Var){
//     unsigned char Var = ' ';
//     return &Var;
// }