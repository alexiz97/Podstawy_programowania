// zad9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int n;
	int m;

	cout << "Podaj n-elementow:";
	cin >> n;
	cout << "Podaj m-elementow:";
	cin >> m;

	int tab[n][m];

	for (int i = 0; i<n; i++)
		for (int j = 0; j<m; j++)
			tab[i][j] = rand() % 19 + (-9);

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			cout << tab[i][j] << "    ";
		cout << endl;
	}
	int tab1[n]; // tablica od sumy
	int tab2[m]; // od iloczynu
	int index = 0; // licznik dla sumy
	int codex = 0; // licznik dla iloczynu
	int tab_min[n]; // tablica minimalnych (iloczyn = tab2)
	int tab_max[m]; // tablica maksymalnych (suma = tab1)
	int min = 0;
	int max = 0;
	int licznik_max = 0; // licznik dla maxa
	int licznik_min = 0; // dla min;

	for (int i = 0; i<n; i++) // wypełniam tablice "0" - dla sumy; "1" - dla iloczynu;
		tab1[i] = 0;
	for (int i = 0; i<m; i++)
		tab2[i] = 1;

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
			tab1[index] += tab[i][j]; // liczę sumę

		if ((tab1[index]>max) || (max == 0)) // jeśli suma z tego wiersza > max, bądź max jest dalej zerem to:
		{
			licznik_max = 0;
			max = tab1[index];
			for (int j = 0; j<m; j++)
				tab_max[licznik_max++] = tab[i][j];
		}

		index++;
	}

	for (int j = 0; j<m; j++)
	{
		for (int i = 0; i<n; i++)
		{
			tab2[codex] *= tab[i][j];
		}
		if ((tab2[codex]<min) || (min == 0)) // jeśli iloczyn z tej kolumny < min, bądź min jest dalej zerem to:
		{
			licznik_min = 0;
			min = tab2[codex];
			for (int i = 0; i<n; i++)
				tab_min[licznik_min++] = tab[i][j];
		}
		codex++;
	}

	cout << endl << "SUMA WIERSZY:" << endl;
	for (int i = 0; i<index; i++)
		cout << "wiersz " << i + 1 << " = " << tab1[i] << endl;

	cout << endl << endl << "ILOCZYNY KOLUMN:" << endl;
	for (int i = 0; i<codex; i++)
		cout << "kolumna " << i + 1 << " = " << tab2[i] << endl;

	cout << endl << "KOLUMNA O MIN. ILOCZYNIE (elementy):" << endl;
	for (int i = 0; i<licznik_min; i++)
		cout << tab_min[i] << " ";

	cout << endl << "WIERSZ O MAX. SUMIE (elementy):" << endl;
	for (int i = 0; i<licznik_max; i++)
		cout << tab_max[i] << " ";

	// Dlaczego coś takiego:
	// if ((tab1[index]>max)||(max==0))
	// if ((tab2[codex]<min)||(min==0))
	// A no dlatego, że jeśli mój np. max = 0, a wylosuje mi liczby same ujemne, to nic mi na maxa nie wskoczy wtedy - dlatego dodałem warunek, że jeśli coś takiego wystąpi, to jak max pozostaje zerem, to warunek przepuści pierwszą lepszą liczbę i przypisze mi wartość maksymalną jako tą liczbę ujemną :) Możecie spróbować usunąć te warunki (max==0) / (min==0) i polosować sobie trochę programem, aż będą w sumie np. same ujemne, albo w iloczynie same dodatnie i zobaczycie, że program nic wam wtedy nie pokaże.
	system("pause");
	return 0;
}