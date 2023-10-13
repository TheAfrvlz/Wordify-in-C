# XString

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![GitHub release](https://img.shields.io/github/release/barrust/c-utils.svg)]

This library provides a collection of functions to help the treatment of strings in c, reduce the need to write similar code for each project on an ad-hoc basis. The goal is to provide functions that could work like javascripts functions but in c, and can be use in projects that uses strings

If there are other commonly used code or data-structures that should be added, please add a feature request!

## Table of Contents:

```c
int Texlen(unsigned char *StringC, char StopC);
```

```c

void LinesAddress(unsigned char *Principal_Text);
```

```c
unsigned char *AppendW(unsigned char *Principal_Text, unsigned char *Word);
```

```c
unsigned char *AppendL(unsigned char *Principal_Text, unsigned char Letter);
```

```c
unsigned int  numLines(unsigned char *Principal_Text);
```

```c
unsigned char  *toUpperCaseWord(unsigned char  *Word);
```

```c
unsigned char toUpperCaseLetter(unsigned char Letter);
```

```c
unsigned char  *toLowerCaseWord(unsigned char  *Word);
```

```c
unsigned char toLowerCaseLetter(unsigned char Letter);
```

```c
void CompareStringW(unsigned char *StringRef, unsigned char *Word2Compare);
```

```c
void ClearT(unsigned char *Text);
```

```c
unsigned char * FindLetter(unsigned char Letter2Find, unsigned char *A2Find, unsigned char StopC);
```

```c
unsigned char * FindWord(unsigned char  *Word2Find, unsigned char *A2Find, unsigned char StopC);
```

```c
unsigned char * FindSymbol(unsigned char Symbol2Find, unsigned char *A2Find, unsigned char StopC);
```

```c
void ReplaceW(unsigned char *OriginString, unsigned char *toReplace, unsigned char *newS);
```

```c
unsigned char *getAfterW (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
unsigned char *getBeforeW (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
unsigned char *getAfterSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Symbol, unsigned char StopC);
```

```c
unsigned char *getBeforeSymbol(unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Symbol, unsigned char StopC);
```

```c
unsigned char *getAfterchar   (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Letter, unsigned char StopC);
```

```c
unsigned char *getBeforechar  (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Letter, unsigned char StopC);
```

```c
unsigned char * RegexFind(unsigned char *Regex, unsigned char *A2Find, unsigned char StopC);
```

```c
void InsertOperationOnInterval(unsigned char *StartAddC, unsigned char **ArrayOfWordConcidences, unsigned char StopC, unsigned char StopCoincidence);
```

```c
void  EraseOperationOnInterval(unsigned char *StartAddC, unsigned char **ArrayOfWordConcidences, unsigned char StopC, unsigned char StopCoincidence);
```

```c
void DeleteSpace(char *StringC, char StopC);
```

```c
unsigned char *getBeforeLine(int line);
```

```c
unsigned char *getAfterLine(int line);
```

```c
unsigned char *getLine(int line);
```

```c
unsigned char *getBetweenSymbol(char *StartAddC,char *symbol);
```

```c
void ShiftLeftString(char *lineAdd, int len, char *String2Shift);
```

```c
void ShiftRightString(char *lineAdd, int len, char *String2Shift);
```

```c
void InsertBeforeWord (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
void InsertAfterWord (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
void InsertBeforeLetter (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
void InsertAfterLetter (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
void InsertBeforeSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
void InsertAfterSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```c
int W2I(unsigned char*Ref);
```

```c
unsigned char* I2W(int Var);
```
