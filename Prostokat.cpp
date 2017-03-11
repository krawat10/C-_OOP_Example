#include "Prostokat.h"

#include <iostream>


using namespace std;
//
//: a(a), b(b) - odwołanie do konstruktora bazowego
//
Prostokat::Prostokat(double a, double b) : a(a), b(b)
{
	cout << "Konstruktor Prostokata (" << a << ", " << b <<")" << endl;
}

double Prostokat::GetA() const
{
	return a;
}

double Prostokat::GetB() const
{
	return b;
}

void Prostokat::SetA(double a)
{
	this->a = a;
}

void Prostokat::SetB(double b)
{
	this->b = b;
}

double Prostokat::Obwod()
{
	return 2 * (this->a + this->b);
}

double Prostokat::Pole()
{
	return this->a * this->b;
}

void Prostokat::Wypisz(std::ostream& out) const
{	
	out << "Figura to prostokat, którego pole jest równe: " << a * b
		<< ", a obwod" << 2 * (a*b) << endl;
}

Prostokat::~Prostokat()
{
	cout << "Prostokat" << endl;
	//, której pole jest równe: " << this->Obwod() << " a obwod" << this->Pole()
}

