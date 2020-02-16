#include "pch.h"
#include "MyFuncDLL.h"

extern "C" __declspec(dllexport) double Add(double a, double b) {
	return a + b;
}

extern "C" __declspec(dllexport) double Substract(double a, double b) {
	return a - b;
}

extern "C" __declspec(dllexport) double Multiply(double a, double b) {
	return a * b;
}

extern "C" __declspec(dllexport) double Divide(double a, double b) {
	return a / b;
}
