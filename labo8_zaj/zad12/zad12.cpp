//Dana jest lista pracowników o strukturze : nazwisko, imię, miejscowość zapisana w tablicy
//dynamicznej.Napisz program, który utworzy dwa stosy, jeden zawiera dane kobiet, drugi
//mężczyzn.Wypisz dane w tablicy dynamicznej i zawartość stosów.Przyjmij, że imię
//kobiety kończy na literę 'a'.

#include "stdafx.h"
#include <iostream>
#include <istream>
#include <string>
#include <istream>
#include <ctype.h>

using namespace std;

struct pracownik {
	string nazwisko;
	string imie;
	string miejscowosc;
};
struct stos
{
	pracownik dane;
	stos *wsk;
};

stos *wierzcholek1 = NULL;
stos *wierzcholek2 = NULL;
stos *temp1;
stos *temp2;

int main()
{
	int n;
	pracownik **tab;
	cout << "Podaj ilosc pracownikow: ";
	cin >> n;
	tab = new pracownik*[n];
	for (int i = 0; i < n; i++) {
		cout << endl << "Imie: ";
		cin >> tab[i]->imie;
		cout << endl << "Nazwisko: ";
		cin >> tab[i]->nazwisko;
		cout << endl << "Miejscowosc: ";
		cin >> tab[i]->miejscowosc;
	}

	for (int i = 0; i<n; i++)
	{
		if (tab[i]->imie[tab[i]->imie.length()] = 'a') {
			temp1 = wierzcholek1;
			wierzcholek1 = new stos;

			(*wierzcholek1).dane = tab[i];
			(*wierzcholek1).wsk = temp1;
		}
		else {
			temp2 = wierzcholek2;
			wierzcholek2 = new stos;

			(*wierzcholek2).dane = tab[i];
			(*wierzcholek2).wsk = temp2;
		}
	}
	cout << endl << "Tablica:" << endl;
	for (int i = 0; i < n; i++) {
		cout << tab[i].imie << endl;
		cout << tab[i].nazwisko << endl;
		cout << tab[i].miejscowosc << endl;
	}
	cout << endl << "Kobiety:" << endl;
	while (temp1 != NULL)
	{
		cout << (*temp1).dane.imie << endl;
		cout << (*temp1).dane.nazwisko << endl;
		cout << (*temp1).dane.miejscowosc << endl;
		temp1 = (*temp1).wsk;
	}
	cout << endl << "Mezczyzni:" << endl;
	while (temp2 != NULL)
	{
		cout << (*temp2).dane.imie << endl;
		cout << (*temp2).dane.nazwisko << endl;
		cout << (*temp2).dane.miejscowosc << endl;
		temp2 = (*temp2).wsk;
	}
	system("pause");
    return 0;
}

