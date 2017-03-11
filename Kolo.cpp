#pragma once
#include <iostream>
#include <math.h>
#include "Kolo.h"

using namespace std;


Kolo::Kolo(double a) : a(a)
{
	cout << "Konstruktor Koloa (" << a << ")" << endl;
}

double Kolo::GetA() const
{
	return a;
}

void Kolo::SetA(double a)
{
	this->a = a;
}

double Kolo::Obwod()
{
	return 2 * 3.14*a;
}

double Kolo::Pole()
{
	return 3.14 * a* a;
}

void Kolo::Wypisz(std::ostream& out) const
{
	out << "Figura jest Kolo o polu " << 3.14 * a* a << " i obwodzie " << 2 * 3.14*a << endl;
}

Kolo::~Kolo()
{
	cout << "Kolo" << endl;
	// << this->Obwod() << " a obwod" << this->Pole() << endl
}