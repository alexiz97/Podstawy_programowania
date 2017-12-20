// zad2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Napisz program, który utworzy dynamiczną dwuwymiarową tablicę liczb całkowitych o
//wymiarach podanych przez użytkownika. Następnie wypełni ją losowymi liczbami
//z przedziału <0, 200>. Znajdź indeks największego elementu w tablicy. Wypisz ten
//element i jego indeks.
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(time(NULL));
	int **tablica;
	int n, m, a, b;
	cout << "Podaj dlugosc boku n: ";
	cin >> n;
	cout << "Podaj dlugosc boku m: ";
	cin >> m;
	cout << endl;
	tablica = new int *[n];

	for (int i = 0; i<n; i++)

		tablica[i] = new int[m];

	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			tablica[i][j] = rand() % 200 + 0;
		}
	}

	cout << "Tablica wyglada nastepujaco: " << endl;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cout << tablica[i][j] << " ";
		}
		cout << endl;
	}
	int max = 0;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			if (tablica[i][j]>max)
			{
				max = tablica[i][j];
				a = i;
				b = j;
			}
		}
	}
	cout << endl << "Liczba najwieksza wynosi: " << max << " dla i= " << a << " i j= " << b << endl;
}