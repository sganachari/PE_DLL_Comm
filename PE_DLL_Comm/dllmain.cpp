// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "PE_DLL_Comm.h"
#include <stdio.h>

void print_int(int a)
{
    printf("Given input value is %d\n", a);
    return;
}

void print_str(char* a)
{
    printf("Given input value is %s\n", a);
    return;
}

void add_int(int a , int b)
{
    printf("Sum of the input values is %d\n", (a+b));
    return;
}

void sub_int(int a, int b)
{
    if (b>=a)
        printf("Sum of the input values is %d\n", (b - a));
    else
        printf("Sum of the input values is %d\n", (a - b));
    return;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

