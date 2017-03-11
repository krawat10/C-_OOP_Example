#include <iostream>



#pragma once
#include "Prostokat.h"
#include "Trojkat.h"
#include "Kolo.h"

using namespace std;

void test()
{
	Kolo kolo = Kolo(2);
	Prostokat* prostokat = new Prostokat(2, 3);
	Trojkat* trojkat = new Trojkat(1, 2, 3);
	Trojkat* rownoboczny = new Trojkat(1, 2);
	FiguraPlaska* firstTrojkat = new Trojkat(5, 5, 5);	

	cout << "Przykład przesłaniania"<< endl;
	trojkat->przeslanianie();
	firstTrojkat->przeslanianie();
	
	cout << *trojkat;
	cout << *firstTrojkat;
	cout << endl;


	
	FiguraPlaska* tab[3];
	tab[0] = new Trojkat(1, 2, 3);
	tab[1] = new Kolo(3);
	tab[2] = new Prostokat(1, 2);
	
	for (int i = 0; i < 3; i++)
	{
		cout << *tab[i];
		delete tab[i];
		cout << endl;
	}
	
	return;
}
int main()
{
	
	test();	
	int a;
	cin >> a;
}

