//3. Napisz program, który wczyta n –napisów i zapisze w dynamicznej tablicy dwuwymiarowej
//napisy wg.następującej reguły :
//a) pierwszy wiersz - napisy dłuższe niż 10 znaków,
//b) drugi wiersz – napisy rozpoczynające się wielką literą,
//c) trzeci wiersz – napisy, które zawierają cyfrę.

#include "stdafx.h"
#include <iostream>
#include <istream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
	int dz = 0, up = 0, cy = 0, n = 0, temp = 0;
	string **tab;

	cout << "Podaj ilosc napisow: ";
	cin >> n;
	tab = new string*[3];
	for (int i = 0; i < 3; i++) {
		tab[i] = new string[n];
	}
	string napis;
	for (int i = 0; i < n; i++) {
		cout << "Podaj napis: ";
		cin >> napis;
		if (napis.length() > 10) {
			tab[0][dz] = napis;
			dz++;
		}
		else if (isupper(napis[0])) {
			tab[1][up] = napis;
			up++;
		}
		for (int j = 0; j < napis.length(); j++) {
			if(isdigit(napis[j])) {
				temp++;
			}
		}
		if (temp != 0) {
			tab[2][cy] = napis;
			cy++;
		}
		temp = 0;
	}

	for (int i = 0; i < dz; i++) {
		cout << tab[0][i] << " ";
	}
	cout << endl;
	for (int i = 0; i < up; i++) {
		cout << tab[1][i] << " ";
	}
	cout << endl;
	for (int i = 0; i < cy; i++) {
		cout << tab[2][i] << " ";
	}
	cout << endl;
	system("pause");
    return 0;
}

