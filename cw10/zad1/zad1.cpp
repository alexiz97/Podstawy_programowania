// zad1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int par = 0;
int npar = 0;
int ptr = 0;

void licz(int a, int b) {
	int temp = 0;
	if (a > b) {
		a = temp;
		a = b;
		b = temp;
	}
	for (a; a <= b; a++) {
		if (a % 2 == 0) {
			par++;
		}
		if (a % 2 != 0) {
			npar++;
		}
		if (a % 3 == 0) {
			ptr++;
		}
	}
}
void pisz() {
	cout << "Liczb parzystych: " << par << endl;
	cout << "Liczb nieparzystych: " << npar << endl;
	cout << "Liczb podzielnych przez 3: " << ptr << endl;
}

int main()
{
	int a;
	int b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	licz(a, b);
	pisz();
	system("pause");
	return 0;
}

