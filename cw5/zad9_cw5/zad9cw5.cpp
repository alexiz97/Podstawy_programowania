//9. Załóżmy, że tablica 100 elementowa jest wypełniona zerami i
//jedynkami reprezentuje kulki białe(0) i czerwone(1).Napisz program,
//który przedstawia kulki w tablicy tak, by najpierw były kulki czerwone,
//potem białe.

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int k = 0;
	int j = 0;
	int n = 100;
	int pom;
	int T[100] = { 0,1,0,1,1,1,0,0,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,1,0,1,0,0,1,1,0,1,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,1,0,1,1,0,1,0,1,0,1,1,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,1,0,0,0,1,1,1,0,0,0,1,1,1,0,0,1};
	for (int i = 0; i < n; i++) { // to jest sortowanie babelkowe
		for (j = k; j < n - (i + 1); j++) // kazdy element jest sprawdzany czy jest mniejszy od najmnijeszego i przesuwany na nizsze miejsce w tabeli
		{
			if (T[j + 1] > T[j])
			{
				pom = T[j + 1]; // zmienna pom przechowuje element tablicy w momencie wpisania na jego miejsce mniejszej wartosci
				T[j + 1] = T[j];
				T[j] = pom;
			}
		}
		for (k = j - 1; k > i; k--)
		{
			if (T[k] > T[k - 1])
			{
				pom = T[k];
				T[k] = T[k - 1];
				T[k - 1] = pom;
			}
		}
		k++;
	}
	for (int i = 0; i < 100; i++) {
		cout << T[i];
	}
	system("pause");
	return 0;
}

