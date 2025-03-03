#include <iostream>
#include <Windows.h>
#include "_namedpipesb.h"
#include "_namedpipes.h"

using namespace std;

    HANDLE fileHandle = CreateFileA("\\\\.\\pipe\\my-very-cool-pipe-example", GENERIC_READ | GENERIC_WRITE, FILE_SHARE_WRITE, NULL, OPEN_EXISTING, 0, NULL);

    void ReadString(char* output) {
        ULONG read = 0;
        int index = 0;
        do {
            ReadFile(fileHandle, output + index++, 1, &read, NULL);
        } while (read > 0 && *(output + index - 1) != 0);
    }

    void StrOut(const char h[])
    {
        //string k = string(h) + "\r\n";
        //const char* msg = k.c_str();
        const char* msg = h;
        WriteFile(fileHandle, msg, strlen(msg), nullptr, NULL);
    }

