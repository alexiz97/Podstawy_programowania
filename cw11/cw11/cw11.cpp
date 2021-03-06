//1.Zdefiniuj przestrzeń nazw „kalkulator” a w niej zaimplementuj funkcje wykonujące :
//a) operacje arytmetyczne,
//b)generowanie losowej tablicy liczb rzeczywistych z przedziału <-2, 3),
//	c)obliczające wartość sin, cos i tg dla miary stopniowej.
//	Napisz program, w którym ta przestrzeń nazw będzie użyta.
//	Uwaga!Argumentem wejściowym funkcji sin, cos i tg z biblioteki <cmath> jest kąt wyrażony w
//	radianach.

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
namespace kalkulator
{
	void operacje(int a, int b)
	{
		cout << "Dodawanie = " << a + b << endl;
		cout << "Odejmowanie = " << a - b << endl;
		cout << "Mnozenie = " << a*b << endl;
		cout << "Dzielenie = " << (float)a / b << endl;
	}
	void losowanie(int n, float *tab)
	{
		for (int i = 0; i<n; i++)
			tab[i] = (-2) + (double)rand() / RAND_MAX*(3 - (-2));
		cout << endl << "Wylosowana tablica [n]:" << endl;
		for (int i = 0; i<n; i++)
			cout << tab[i] << "  ";
	}
	void wartosc(float stopnie)
	{
		double radian = 3.1415 / 180;
		cout << "Sinus dla kata " << stopnie << " wynosi: " << sin(stopnie*radian) << endl;
		cout << "Cosinus dla kata " << stopnie << " wynosi: " << cos(stopnie*radian) << endl;
		cout << "Tangens dla kata " << stopnie << " wynosi: " << tan(stopnie*radian) << endl;


	}
}

using namespace kalkulator;
int main()
{
	srand(time(NULL));
	int a, b, n;
	float stopnie;

	cout << "Podaj n:";
	cin >> n;
	cout << "Podaj a:";
	cin >> a;
	cout << "Podaj b:";
	cin >> b;
	cout << "Podaj stopnie:";
	cin >> stopnie;

	float *tab = new float[n];

	operacje(a, b);
	cout << endl << endl;
	losowanie(n, tab);
	cout << endl << endl;
	wartosc(stopnie);
	return 0;
}