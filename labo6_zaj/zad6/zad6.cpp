//Dana jest tablica n - elementowa liczb rzeczywistych.Wypisz najdłuzższy ciąg arytmetyczny – gdy
//jest więcej, to pierwszy.
//WEJŚCIE: n = 11[1.1, 0.0, -1.2, -2.4, 2.4, 3.6, 4.8, 6.0, 8.3, 0.0, 1.1]
//	WYJŚCIE : 2.4, 3.6, 4.8, 6.0

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int const n = 8;
	float tab[n];
	float tabi[n];
	float tabs[n];
	float pop = 0;
	float akt = 0;
	float nast = 0;
	int temp = INFINITY;
	int ilo = 0;
	int ilox = 0;
	int s = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
			cout << "Podaj [" << i << "]: " << endl;
			cin >> tab[i];
	}
	cout << "Elementy : " << endl;
	for (int i = 0; i < n; i++) {
		if (i != 0 && tab[i + 1] / tab[i] == tab[i] / tab[i-1]) {
			tabi[i] = tab[i];
			k++;
		}
		else {
			tabs[i] = tab[i];
			s++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << tabi[i];
	}
	for (int i = 0; i < s; i++) {
		cout << tabs[i];
	}


	system("pause");
	return 0;
}

