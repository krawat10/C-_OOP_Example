#pragma once
#include <iostream>
#include <math.h>
#include "Trojkat.h"

using namespace std;


Trojkat::Trojkat(double a, double b, double c) : a(a), b(b), c(c)
{
	cout << "Konstruktor Trojkata (" << a << ", " << b << ", " << c << ")" << endl;
}
Trojkat::Trojkat(double a, double b) : a(a), b(b), c(b)
{
	cout << "Konstruktor Trojkata Rownobocznego (" << a << ", " << b << ", " << b << ")" << endl;
}
double Trojkat::GetA() const
{
	return a;
}

double Trojkat::GetC() const
{
	return c;
}

double Trojkat::GetB() const
{
	return b;
}

void Trojkat::SetA(double a)
{
	this->a = a;
}

void Trojkat::SetB(double b)
{
	this->b = b;
}

void Trojkat::SetC(double c)
{
	this->c = c;
}

double Trojkat::Obwod()
{
	return a+b+c;
}

double Trojkat::Pole()
{
	int p = ((a + b + c) / 2);	
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

void Trojkat::Wypisz(std::ostream& out) const
{
	out << "Figura jest trojkat o bokach " << a <<", "<< b << ", "<< c << "." << endl;
}
void Trojkat::przeslanianie()
{
	cout << "trojkat" << endl;
}
Trojkat::~Trojkat()
{
	cout << "Trojkat" << endl;
	// << this->Obwod() << " a obwod" << this->Pole()
}