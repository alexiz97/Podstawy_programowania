// zad6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
using namespace std;

struct stos
{
	int dane;
	stos *wsk;
};


main()
{
	stos *wierzcholek = NULL;
	stos *temp;
	int wspolczynnik;
	int n;
	int x;
	int horner = 0;
	int xd;

	cout << "Podaj stopien wielomianu:";
	cin >> n;
	cout << endl;
	cout << "Podaj argument:";
	cin >> x;
	cout << endl;

	for (int i = 0; i <= n; i++)
	{
		temp = wierzcholek;
		wierzcholek = new stos;

		cout << "Podaj wspolczynnik przy potedze [" << i << "] : ";
		cin >> wspolczynnik;
		if (i == 0) horner = wspolczynnik; 
		if (i != 0) horner = horner*x + wspolczynnik; 
		(*wierzcholek).dane = wspolczynnik;
		(*wierzcholek).wsk = temp;
	}

	while (temp != NULL)
	{
		cout << (*temp).dane << endl;
		temp = (*temp).wsk;
	}


	cout << endl << endl;

	cout << endl << "HORNER = " << horner << endl;


}