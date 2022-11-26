#pragma once

#ifdef _NamedPipes
  #define EXTERN
#else
  #define EXTERN extern
#endif

    EXTERN HANDLE fileHandle;
    EXTERN void ReadString(char* output);
    EXTERN void StrOut(const char h[]);

