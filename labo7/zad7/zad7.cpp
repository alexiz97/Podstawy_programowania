// zad7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

struct PUNKT{
	float x;
	float y;
	char cwiartka[5];
};

int main()
{
	int n = 0;
	float x = 0;
	float y = 0;
	int pi = 0;
	int dw = 0;
	int tr = 0;
	int cz = 0;
	char cw = NULL;
	cout << "Ile punktow chcesz dodac do bazy? " << endl;
	cin >> n;
	PUNKT *tab;
	tab = new PUNKT[n];
	for (int i = 0; i < n; i++) {
		cout << "Podaj x: " << endl;
		cin >> x;
		cout << "Podaj y: " << endl;
		cin >> y;
		if (x > 0 && y > 0) {
			strcpy_s(tab[i].cwiartka,"I") ;
			pi++;
		}
		if (x < 0 && y > 0) {
			strcpy_s(tab[i].cwiartka, "II");
			dw++;
		}
		if (x < 0 && y < 0) {
			strcpy_s(tab[i].cwiartka, "III");
			tr++;
		}
		if (x > 0 && y < 0) {
			strcpy_s(tab[i].cwiartka, "IV");
			cz++;
		}
		tab[i].x = x;
		tab[i].y = y;
	}

	cout << "Ilosc elementow w: " << endl;
	cout << "Pierwszej cwiartce: " << pi << endl;
	cout << "Drugiej cwiartce: " << dw << endl;
	cout << "Trzeciej cwiartce: " << tr << endl;
	cout << "Czwartej cwiartce: " << cz << endl;

	system("pause");
	return 0;
}

