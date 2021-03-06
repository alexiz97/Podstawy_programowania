// zad4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdlib.h>
#include <string>
using namespace std;


main()
{
	ifstream plik;
	plik.open("input.txt");

	string linia;
	int countNumbers = 0, countLetters = 0, countOther = 0;

	while (plik >> linia)
	{
		for (int i = 0; i<linia.length(); i++)
		{
			if (isdigit(linia[i]))
				countNumbers++;
			else if (isalpha(linia[i])) 
				countLetters++;
			else if (isprint(linia[i])) 
				countOther++;
		}
		cout << linia << endl;
	}
	plik.close();

	cout << endl << "Wystapienia liczb: " << countNumbers << endl << "Wystapienia liter: " << countLetters << endl << "Wystapienia innych drukowalnych znakow: " << countOther << endl << endl;

	double procent;
	procent = (double)countNumbers / (countNumbers + countLetters + countOther);
	cout << "Liczby stanowia " << procent * 100 << "% danych wejsciowych." << endl;

	procent = (double)countLetters / (countNumbers + countLetters + countOther);
	cout << "Litery stanowia " << procent * 100 << "% danych wejsciowych." << endl;

	procent = (double)countOther / (countNumbers + countLetters + countOther);
	cout << "Pozostale znaki stanowia " << procent * 100 << "% danych wejsciowych." << endl;
	system("pause");
	return 0;
}