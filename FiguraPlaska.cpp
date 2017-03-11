#pragma once
#include "FiguraPlaska.h"

//
//to jest funkcja friend w klasie Figura plaska (bez FiguraPlaska::....)
//ospowiada za np. cout << obiektProstokat
//
std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura)
{
	figura.Wypisz(os);
	return os;
}
//
//to należy do FiguraPlaska to dodajemy FiguraPlaska::__________
//
FiguraPlaska::~FiguraPlaska()
{

}

void FiguraPlaska::przeslanianie()
{
	std::cout << "bazowa" << std::endl;
}