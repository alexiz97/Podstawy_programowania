// zad3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;


int main()
{
	float *tab;
	float n;
	int kierunek;
	char algorytm, t;
	srand((float)time(NULL));
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;
	tab = new float[n];
	cout << "Tablica: " << endl;
	float a = 0;
	float b = 100;
	for (int i = 0; i<n; i++)
	{
		tab[i] = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
		cout << tab[i] << endl;
	}
    return 0;
}

