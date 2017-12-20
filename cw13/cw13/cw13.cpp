// cw13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <istream>
#include <string>
using namespace std;
void funkcja(string nazwa)
{
	fstream plik;
	plik.open(nazwa.c_str(), ios::in);
	char zn;

	if (plik.good())
	{
		while ((zn = plik.get()) != EOF)
		{
			cout << zn;
		}
		plik.close();
	}
	else cout << "brak pliku!" << endl;


}

int main()
{
	int n;
	cout << "Ilu studentow chcesz wprowadzic?";
	cin >> n;

	int *rok, *wybor;
	string *imie, *nazwisko, *specjalnosc;
	imie = new string[n], nazwisko = new string[n], specjalnosc = new string[n];
	rok = new int[n], wybor = new int[n];

	for (int i = 0; i<n; i++)
	{
		cout << endl << endl;
		cout << "Podaj imie:";
		cin >> imie[i];

		cout << "Podaj nazwisko:";
		cin >> nazwisko[i];

		cout << "Podaj rok studiow:";
		cin >> rok[i];

		cout << "Wybierz specjalnosc:" << endl;
		cout << "[1] Programowanie i bazy danych" << endl;
		cout << "[2] Systemy i sieci" << endl;
		cout << "[3] Grafika komputerowa" << endl;
		cout << "[4] Bezpieczenstwo systemow komputerowych" << endl;
		cin >> wybor[i];

		switch (wybor[i])
		{
		case 1:
			specjalnosc[i] = "Programowanie i bazy danych";
			break;
		case 2:
			specjalnosc[i] = "Systemy i sieci";
			break;
		case 3:
			specjalnosc[i] = "Grafika komputerowa";
			break;
		case 4:
			specjalnosc[i] = "Bezpieczenstwo systemow komputerowych";
			break;
		}

		fstream plik;
		plik.open("zadanie1.txt", ios::out | ios::app);
		plik << imie[i] << endl;
		plik << nazwisko[i] << endl;
		plik << rok[i] << endl;
		plik << specjalnosc[i] << endl;
		plik.close();
	}

	funkcja("zadanie1.txt");


	system("pause");
	return 0;
}