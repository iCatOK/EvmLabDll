#pragma once
#ifdef DLL_EXPORTS
#define DLL_API extern "C" __declspec(dllexport)
#else
#define DLL_API  __declspec(dllimport)
#endif

DLL_API double Add(double a, double b);

DLL_API double Substract(double a, double b);

DLL_API double Multiply(double a, double b);

DLL_API double Divide(double a, double b);

