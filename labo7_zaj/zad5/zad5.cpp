//5. Zdefiniuj typ strukturalny oraz 50 - cio elementową tablicę struktur pozwalającą przechowywać
//informacje o towarach w sklepie RTV(nazwa_towaru, ilosc_sztuk, cena).Napisz program, który
//będzie :
//a) dodawał towar do bazy,
//b) wypisywał listę towarów, których jest w sklepie mniej niż ilość podana od użytkownika,
//c) wypisywał ilość sztuk towaru o podanej nazwie,
//d) wypisze dane najtańszego towaru w sklepie

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
#include <sstream>
using namespace std;

struct cena {
	int zl;
	int gr;
};

struct sklep {
	string nazwa_towaru;
	int ilosc_sztuk;
	cena cena;
};

int main()
{
	sklep sklep[50];
	int n = 0;
	int m = 0;
	int gr = 0;
	int ilosc;
	int mn = 0;
	int tw = 0;
	string nazwa;
	while (m != 5)
	{
		cout << "[1] Dodaj do bazy" << endl;
		cout << "[2] Wyszukaj towary o mniejszej ilosci" << endl;
		cout << "[3] Wyszukaj ilosc towaru" << endl;
		cout << "[4] Wyszukaj najtanszy towar" << endl;
		cout << "[5] Koniec" << endl;
		cin >> m;

		switch (m)
		{
		case 1:
			cout << "Nazwa towaru:";
			cin >> sklep[n].nazwa_towaru;
			cout << "Ilosc:";
			cin >> sklep[n].ilosc_sztuk;
			cout << "Cena:";
			cout << "Zlotych:";
			cin >> sklep[n].cena.zl;
			cout << "Groszy:";
			do {
				cin >> gr;
			} while (gr > 100 || gr < 0);
			sklep[n].cena.gr = gr;
			cout << endl << endl;
			break;
		case 2:
			cout << "Podaj ilosc: ";
			cin >> ilosc;
			
			for (int i = 0; i < 50; i++) {
				if (sklep[i].ilosc_sztuk < ilosc) {
					mn = i;
				}
			}
			cout << sklep[mn].nazwa_towaru;
			break;
		case 3:
			cout << "Podaj towar: ";
			cin >> nazwa;

			for (int i = 0; i < 50; i++) {
				if (sklep[i].nazwa_towaru == nazwa) {
					tw = i;
				}
			}
			cout << sklep[tw].ilosc_sztuk;
			break;
		case 4:
			cout << "Najtanszy towar: ";
			int najm = 0;
			for (int i = 0; i < 50; i++) {
				if (sklep[najm].cena.zl > sklep[i].cena.zl) {
					najm = i;
				}
				else if (sklep[najm].cena.zl = sklep[i].cena.zl) {
					if (sklep[najm].cena.gr > sklep[i].cena.gr) {
						najm = i;
					}
				}
			}
			cout << "Nazwa towaru:";
			cout << sklep[n].nazwa_towaru << endl;
			cout << "Ilosc:";
			cout << sklep[n].ilosc_sztuk << endl;
			cout << "Cena:";
			cout << sklep[n].cena.zl << ":" << sklep[n].cena.gr;
			break;
			}
	}
    return 0;
}

