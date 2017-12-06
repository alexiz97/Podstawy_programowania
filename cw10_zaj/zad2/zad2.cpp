//Napisz funkcję, która na podstawie trzech argumentów typu całkowitego sprawdzi czy podane liczby
//są liczbami pitagorejskimi(funkcja ma zwrócić 1 gdy odpowiedź jest twierdząca, 0 w przeciwnym
//wypadku).Wynik wyświetl za pomocą innej funkcji.

#include "stdafx.h"
#include <iostream>
using namespace std;

int ispit(int a, int b, int c) {
	int wynik = 0;
	if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
		wynik = 1;
	}
	else if (pow(b, 2) + pow(c, 2) == pow(a, 2)) {
		wynik = 1;
	}
	else if (pow(a, 2) + pow(c, 2) == pow(b, 2)) {
		wynik = 1;
	}
	return wynik;
}

void wynik(int wynik) {
	if (wynik == 1) {
		cout << "Podane liczby sa liczbami pitagorejskimi :)" << endl;
	}
	if (wynik == 0) {
		cout << "Podane liczby nie sa liczbami pitagorejskimi :)" << endl;
	}
}

int main()
{
	int a, b, c;
	cout << "Podaj a,b,c: " << endl;
	cin >> a;
	cout << endl;
	cin >> b;
	cout << endl;
	cin >> c;
	cout << endl;
	wynik(ispit(a, b, c));
	system("pause");
    return 0;
}

