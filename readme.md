# C - Stringify

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![GitHub release](https://img.shields.io/github/release/barrust/c-utils.svg)]

This library provides a collection of functions to help the treatment of strings in c, reduce the need to write similar code for each project on an ad-hoc basis.  The goal is to provide functions that could work like javascripts functions but in c, and can be use in projects that uses strings

If there are other commonly used code or data-structures that should be added, please add a feature request!

## Table of Contents:

>int Texlen(unsigned char *StringC, char StopC);
```

```
>void LinesAddress(unsigned char *Principal_Text);
```

```
>unsigned char *AppendW(unsigned char *Principal_Text, unsigned char *Word);
```

```
>unsigned char *AppendL(unsigned char *Principal_Text, unsigned char Letter);
```

```
>unsigned int  numLines(unsigned char *Principal_Text);
```

```
>unsigned char  *toUpperCaseWord(unsigned char  *Word);
```

```
>unsigned char toUpperCaseLetter(unsigned char Letter);
```

```
>unsigned char  *toLowerCaseWord(unsigned char  *Word);
```

```
>unsigned char toLowerCaseLetter(unsigned char Letter);
```

```
>void CompareStringW(unsigned char *StringRef, unsigned char *Word2Compare);
```

```
>void ClearT(unsigned char *Text);
```

```
>boolean FindLetter(unsigned char Letter2Find, unsigned char *A2Find, unsigned char StopC);
```

```
>boolean FindWord(unsigned char  *Word2Find, unsigned char *A2Find, unsigned char StopC);
```

```
>boolean FindSymbol(unsigned char Symbol2Find, unsigned char *A2Find, unsigned char StopC);
```

```
>void ReplaceW(unsigned char *OriginString, unsigned char *toReplace, unsigned char *newS);
```

```
>unsigned char *getAfterW (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>unsigned char *getBeforeW (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>unsigned char *getAfterSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Symbol, unsigned char StopC);
```

```
>unsigned char *getBeforeSymbol(unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Symbol, unsigned char StopC);
```

```
>unsigned char *getAfterchar   (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Letter, unsigned char StopC); 
```

```
>unsigned char *getBeforechar  (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char   Letter, unsigned char StopC);
```

```
>boolean RegexFind(unsigned char *Regex, unsigned char *A2Find, unsigned char StopC);
```

```
>void InsertOperationOnInterval(unsigned char *StartAddC, unsigned char **ArrayOfWordConcidences, unsigned char StopC, unsigned char StopCoincidence);
```

```
>void  EraseOperationOnInterval(unsigned char *StartAddC, unsigned char **ArrayOfWordConcidences, unsigned char StopC, unsigned char 
StopCoincidence);
```

```
>void DeleteSpace(char *StringC, char StopC);
```

```
>unsigned char *getBeforeLine(int line);
```

```
>unsigned char *getAfterLine(int line);
```

```
>unsigned char *getLine(int line);
```

```
>unsigned char *getBetweenSymbol(char *StartAddC,char *symbol);
```

```
>void ShiftLeftString(char *lineAdd, int len, char *String2Shift);
```

```
>void ShiftRightString(char *lineAdd, int len, char *String2Shift);
```

```
>void InsertBeforeWord (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>void InsertAfterWord (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>void InsertBeforeLetter (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>void InsertAfterLetter (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>void InsertBeforeSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>void InsertAfterSymbol (unsigned int WordCoincidences, unsigned int line, unsigned char *StartAddC, unsigned char *StringC, unsigned char StopC);
```

```
>int W2I(unsigned char*Ref);
```

```
>unsigned char* I2W(int Var);

```

```