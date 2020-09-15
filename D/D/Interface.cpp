#include "Division.h"
#include "Addition.h"
#include "Subtraction.h"
#include <iostream>
#include <Windows.h>
using namespace std;
typedef int(*fun)(const int &a, const int &b);
int main()
{
	cout << "Add:" << Add(1, 2) << endl;
	cout << "Sub:" << Sub(6, 2) << endl;

	HINSTANCE mydll = LoadLibrary(L"..//Debug//C.dll");
	if (mydll != NULL)
	{
		fun Mul = (fun)GetProcAddress(mydll, "Mul");
		if (Mul != NULL)
		{
			cout << "Mul:" << Mul(3, 3) << endl;
		}
	}
	FreeLibrary(mydll);

	cout << "Div:" << Div(5, 3) << endl;


	getchar();
}