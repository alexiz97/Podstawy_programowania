// cw11_zaj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
	using namespace std;
	namespace operacje
{
	struct punkt
	{
		float x;
		float y;
	};
		void init(punkt *p)
		{
			p->x = 3;
		p->y = 4;
		}
		float dist0(punkt p)
	{
			return sqrt(p.x*p.x + p.y*p.y);
		}
	}
	using namespace operacje;
	int main()
	{
	punkt p;
		init(&p);
	cout << "odleglosc od (0,0)=" << dist0(p) << endl;
	system("pause");
	return 0;
}
