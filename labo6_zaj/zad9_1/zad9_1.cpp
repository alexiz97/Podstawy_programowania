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
	int ilox = 1;
	int naj = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Podaj [" << i << "][" << j << "]: " << endl;
			cin >> tab[i][j];
		}
	}
	cout << "Elementy o minimalnym iloczynie: " << endl;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if(i == 0)
			ilox = tab[i][j] * tab[i+1][j];
			else
			ilox = tab[i][j] * tab[i-1][j];
		}
		temp = ilox;
		if (naj > ilox) {
			ilo = j;
			naj = temp;
		}

		ilox = 1;
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

