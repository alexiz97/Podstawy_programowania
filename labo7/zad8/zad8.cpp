// zad8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <time.h>
#include <cstdlib>
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
	srand(time(NULL));
	Student tab[100];
	for (int i = 0; i<100; i++)
	{
		x = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
		tab[i].imie = "imie_" + itoa(i+1);
	}
	system("pause");
    return 0;
}

