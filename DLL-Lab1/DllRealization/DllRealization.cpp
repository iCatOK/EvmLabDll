// DllRealization.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <libloaderapi.h>
#include <Windows.h>
#include <string>

typedef int (*pAdd) (int a, int b);

using namespace std;

int main()
{
	HINSTANCE hInstance = LoadLibrary(L"D:\\DEV\\C++\\Projects\\4 sem\\EVM-test\\Dll-exersises\\testDllWidget\\testLibrary\\testLibrary.dll");

	if (!hInstance) {
		cout << "Fuck yourself!";
	}

	pAdd add = (pAdd)GetProcAddress(hInstance, "_ZN11TestLibrary3AddEii");

	if (add) {
		cout << "God said : ' Yeas '.\n\n";
	}

	cout << add(5, 2);
}
