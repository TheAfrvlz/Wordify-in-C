# C - Stringify

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![GitHub release](https://img.shields.io/github/release/barrust/c-utils.svg)](https://github.com/barrust/c-utils/releases)
[![C/C++ CI](https://github.com/barrust/c-utils/workflows/C/C++%20CI/badge.svg?branch=master)](https://github.com/barrust/c-utils/actions)
[![codecov](https://codecov.io/gh/barrust/c-utils/branch/master/graph/badge.svg)](https://codecov.io/gh/barrust/c-utils)


This library provides a collection of functions to help the treatment of strings in c, reduce the need to write similar code for each project on an ad-hoc basis.  The goal is to provide functions that could work like javascripts functions but in c, and can be use in projects that uses strings

If there are other commonly used code or data-structures that should be added, please add a feature request!

##### Table of Contents:
* [stringlib](#stringlib) int Texlen(unsigned char* StringC,char StopC);
* [stringlib](#stringlib) void LinesAddress(unsigned char* MainS);
* [stringlib](#stringlib) unsigned char* AppendW(unsigned char* StringC1, unsigned char* StringC2);
* [stringlib](#stringlib) unsigned char* AppendL(unsigned char* StringC, char C);
* [stringlib](#stringlib) int numLines(unsigned char* MainS);
* [stringlib](#stringlib) unsigned char* toUpperCaseW(unsigned char* StringC);
* [stringlib](#stringlib) char toUpperCaseL(char C);
* [stringlib](#stringlib) unsigned char* toLowerCaseW(unsigned char* StringC);
* [stringlib](#stringlib) char toLowerCaseL(char C);
* [stringlib](#stringlib) void CompareStringW(unsigned char* StringRef, unsigned char* String2C);
* [stringlib](#stringlib) void ClearT(unsigned char* StringC);
* [stringlib](#stringlib) boolean Findchar(char C, unsigned char* StringC);
* [stringlib](#stringlib) boolean FindString(unsigned char* Origin, unsigned char* toFind);
* [stringlib](#stringlib) boolean FindSymbol(char S, unsigned char* StringC);
* [stringlib](#stringlib) void ReplaceW(char *OriginString, char *toReplace, char *newS);
* [stringlib](#stringlib) void DeleteSpace(char *StringC, char StopC);
* [stringlib](#stringlib) unsigned char *getAfterSymbol(char *StartAddC, char S, char StopC);
* [stringlib](#stringlib) unsigned char *getBeforeSymbol(char *StartAddC, char S, char StopC);
* [stringlib](#stringlib) unsigned char *getAfterchar(char *StartAddC, char L, char StopC);
* [stringlib](#stringlib) unsigned char *getBeforechar(char *StartAddC, char L, char StopC);
* [stringlib](#stringlib) unsigned char *getAfterW(char *StartAddC, char StringC, char StopC);
* [stringlib](#stringlib) unsigned char *getBeforeW(char *StartAddC, char StringC, char StopC);
* [stringlib](#stringlib) unsigned char *getBeforeLine(int line);
* [stringlib](#stringlib) unsigned char *getAfterLine(int line);
* [stringlib](#stringlib) unsigned char *getLine(int line);
* [stringlib](#stringlib) unsigned char *getBetweenSymbol(char *StartAddC,char *symbol);
* [stringlib](#stringlib) void ShiftLeftString(char *lineAdd, int len, char *String2Shift);
* [stringlib](#stringlib) void ShiftRightString(char *lineAdd, int len, char *String2Shift);
* [stringlib](#stringlib) int W2I(unsigned char*Ref);
* [stringlib](#stringlib) unsigned char* I2W(int Var);