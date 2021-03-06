//4. Dana jest n - elementowy wektor losowych liczb rzeczywistych, n <= 100. Napisz program, który posortuje
//ten wektor jedną z metod do wyboru: S - przez selekcję lub W - przez wstawianie.
//Sortowanie powinno odbywać się zgodnie z podanym kierunkiem : -1 – nierosnąco lub
//1 - niemalejąco.Nagłówek funkcji sort(int n, float tab[], int kierunek, char algorytm);
//Przykład:
//WEJŚCIE: { 13.3 15.7 8.0 2.0 19.0} -1 W
//	WYJŚCIE : Sortowanie nierosnąco metodą „przez wstawianie” : {[2.0 8.0 13.3 15.7 19.0}

#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

float *tab;
void wypisz(float tab[], int n) {
	for (int i = 0; i<n; i++)
	{
		cout << tab[i] << endl;
	}
};

void sort(int n, float tab[], int kierunek, char algorytm)
{
	int mn, i, j;
	float v;
	if (algorytm == 'S' && kierunek == -1) {
		for (int i = 0; i < n - 1; i++)
		{
			mn = i;
			for (int j = i + 1; j < n; j++)
				if (tab[j] > tab[mn])
					mn = j;

			swap(tab[i], tab[mn]);
		}
	}
	else if (algorytm == 'S' && kierunek == 1) {
		for (int i = 0; i < n - 1; i++)
		{
			mn = i;
			for (int j = i + 1; j < n; j++)
				if (tab[j] < tab[mn])
					mn = j;

			swap(tab[i], tab[mn]);
		}
	}
	else if (algorytm = 'W' && kierunek == -1) {
		for (i = 1; i < n; i++)
		{
			j = i;
			v = tab[i];
			while ((j > 0) && (tab[j - 1] < v))
			{
				tab[j] = tab[j - 1];
				j--;
			}
			tab[j] = v;
		}
	}
	else if (algorytm = 'W' && kierunek == 1) {
		for (i = 1; i < n; i++)
		{
			j = i;
			v = tab[i];
			while ((j > 0) && (tab[j - 1] > v))
			{
				tab[j] = tab[j - 1];
				j--;
			}
			tab[j] = v;
		}
	}
}



int main()
{
	float n;
	int kierunek;
	char algorytm, t;
	srand((float)time(NULL));
	cout << "Podaj ilosc elementow tablicy: ";
	cin >> n;
	tab = new float[n];
	cout << "Tablica: " << endl;
	float a = 0;
	float b = 100;
	for (int i = 0; i<n; i++)
	{
		tab[i] = (rand() / (RAND_MAX + 1.0))* (b - a) + a;
		cout << tab[i] << endl;
	}
	cout << "Podaj kierunek: ";
	cin >> kierunek;
	cout << "Podaj algorytm: ";
	cin >> algorytm;
	sort(n, tab, kierunek, algorytm);
	wypisz(tab, n);
	system("pause");
	return 0;
}
