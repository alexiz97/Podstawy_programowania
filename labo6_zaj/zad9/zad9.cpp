//Dana jest dwuwymiarowa tablica nxm liczb całkowitych.Utwoź rz dwie tablice jednowymiarowe,
//jedna zawiera przepisaną kolumnę, ktoź ra ma elementy o minimalnym iloczynie, a druga zawiera
//przepisany wiersz o maksymalnej sumie.Wypisz je.

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int const n = 2;
	int const m = 3;
	int tab[n][m];
	int tabi[m];
	int tabs[n];
	int suma = 0;
	int sumax = 0;
	int temp = INFINITY;
	int ilo = 0;
	int ilox = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Podaj [" << i << "][" << j << "]: " << endl;
			cin >> tab[i][j];
		}
	}
	cout << "Elementy o minimalnym iloczynie: " << endl;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			ilox = ilox * tab[i][j];
		}
		if (temp > ilox) {
			ilo = j;
		}
		temp = ilox;
		ilox = 0;
	}
	for (int i = 0; i < n; i++) {
		tabi[i] = tab[i][ilo];
		cout << tabi[i] << endl;
	}
	cout << "Elementy o maksymalnej sumie: " << endl;
	temp = -INFINITY;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			sumax = sumax + tab[i][j];
		}
		if (temp < sumax) {
			suma = i;
		}
		temp = sumax;
		sumax = 0;
	}
	for (int j = 0; j < m; j++) {
		tabs[j] = tab[suma][j];
		cout << tabs[j] << endl;
	}



	system("pause");
	return 0;
}

