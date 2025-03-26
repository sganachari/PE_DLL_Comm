#pragma once
#ifdef PEDLLCOMM_EXPORTS
#define PEDLLCOMM_API __declspec(dllexport)
#else
#define PEDLLCOMM_API __declspec(dllimport)
#endif

//prints the given integer to stdout
extern "C" PEDLLCOMM_API void print_int(int a);
//prints the given string to stdout
extern "C" PEDLLCOMM_API void print_str(char* a);
//prints the sum of given 2 integers to stdout
extern "C" PEDLLCOMM_API void add_int(int a, int b);
//prints the difference of given 2 integers to stdout
extern "C" PEDLLCOMM_API void sub_int(int a, int b);