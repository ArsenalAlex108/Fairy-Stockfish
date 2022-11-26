#pragma once

#ifdef _NamedPipes
  #define EXTERN
#else
  #define EXTERN extern
#endif

    extern HANDLE fileHandle;
    extern void ReadString(char* output);
    extern void StrOut(const char h[]);

