//8. Zdefiniuj odpowiednie struktury i napisz program, który:
//a.wypełni tablicę studentów następującymi danymi :
//`imie – imie_nr, gdzie nr to kolejna liczba
//nazwisko - nazwisko_nr, gdzie nr to kolejna liczba
//rok_studiów – liczba pseudolosowa z przedziału <1, 4>
//kierunek – zależnie od wylosowanej liczby z przedziału <0, 3) 0 - informatyka, 1 - chemia, 2 -
//	matematyka
//	data_urodzenia – pole złożone zawierające dzień, miesiąc i rok.Rok – liczba
//	pseudolosowa z przedziału 1980 – 1997, miesiąc – liczba z przedziału 1 - 12, dzień – liczba
//	pseudolosowa, zależna od miesiąca i roku,
//	b.wypisuje dane z bazy;
//c.wypisze imię i nazwisko osoby najmłodszej i najstarszej, jeśli jest kilka takich osób
//powinno być podane nazwisko pierwszej.

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <sstream>
using namespace std;


struct data_urodzenia {
	int dzien, miesiac, rok;
};

struct Student {
	string imie; string nazwisko; int rok_studiow; string kierunek;
	data_urodzenia dataurodzenia;
};

int main()
{
	char x[5];
	srand(time(NULL));
	Student tab[100];
	for (int i = 0; i<100; i++)
	{
		if (i == 99) {
			cout << "ss";
		}
		int q = (rand() / (RAND_MAX + 1.0))* (5 - 1) + 1;
		int w = (rand() / (RAND_MAX + 1.0))* (3 - 0) + 0;
		int e = (rand() / (RAND_MAX + 1.0))* (1998 - 1980) + 1980;
		int r = (rand() / (RAND_MAX + 1.0))* (12 - 1) + 1;
		int t = (rand() / (RAND_MAX + 1.0))* (30 - 1) + 1;
		int z = i + 1;
		_itoa_s(z, x, 10);
		string im = "imie_";
		string na = "nazwisko_";
		tab[i].imie = im + x;
		tab[i].nazwisko = na + x;
		tab[i].rok_studiow = q;
		if (w == 0) {
			tab[i].kierunek = "informatyka";
		}
		else if (w == 1) {
			tab[i].kierunek = "chemia";
		}
		else if (w == 2) {
			tab[i].kierunek = "matematyka";
		}
		tab[i].dataurodzenia.dzien = t;
		tab[i].dataurodzenia.miesiac = r;
		tab[i].dataurodzenia.rok = e;
	}
	for (int i = 0; i < 100; i++) {
		cout << "Imie: ";
		cout << tab[i].imie << endl;
		cout << "Nazwisko: ";
		cout << tab[i].nazwisko << endl;
		cout << "Rok studiow: ";
		cout << tab[i].rok_studiow << endl;
		cout << "Kierunek: ";
		cout << tab[i].kierunek << endl;
		cout << "Data urodzenia: ";
		cout << tab[i].dataurodzenia.dzien << " " << tab[i].dataurodzenia.miesiac << " " << tab[i].dataurodzenia.rok << endl << endl;
	}
	int naj = 0;
	for (int i = 1; i < 100; i++) {
		if (tab[naj].dataurodzenia.rok < tab[i].dataurodzenia.rok) {
			naj = i;
		}
		else if (tab[naj].dataurodzenia.rok == tab[i].dataurodzenia.rok) {
			if (tab[naj].dataurodzenia.miesiac < tab[i].dataurodzenia.miesiac) {
				naj = i;
			}
			else if (tab[naj].dataurodzenia.miesiac == tab[i].dataurodzenia.miesiac) {
				if (tab[naj].dataurodzenia.dzien < tab[i].dataurodzenia.dzien) {
					naj = i;
				}
			}
		}
	}
	int najm = 0;
	for (int i = 1; i < 100; i++) {
		if (tab[najm].dataurodzenia.rok > tab[i].dataurodzenia.rok) {
			najm = i;
		}
		else if (tab[najm].dataurodzenia.rok == tab[i].dataurodzenia.rok) {
			if (tab[najm].dataurodzenia.miesiac > tab[i].dataurodzenia.miesiac) {
				najm = i;
			}
			else if (tab[najm].dataurodzenia.miesiac == tab[i].dataurodzenia.miesiac) {
				if (tab[najm].dataurodzenia.dzien > tab[i].dataurodzenia.dzien) {
					najm = i;
				}
			}
		}
	}
	cout << "Osoba najmlodsza: " << endl;
	cout << tab[najm].imie << endl;
	cout << tab[najm].nazwisko << endl;
	cout << "Osoba najstarsza: " << endl;
	cout << tab[naj].imie << endl;
	cout << tab[naj].nazwisko << endl;
	system("pause");
	return 0;
}

