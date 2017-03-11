#pragma once
#include <iostream>
//
//w pliku nagłówkowym przedstawiamy definicje pól/metod/konstruktorów danej klasy (bez ciał)
//
class FiguraPlaska
{
protected:
	//
	//metoda wirtualna (override'owalna), 
	//std::ostream& - referencja do obiektu typu std::ostream (lub innej klasy po niej dziedziczącej)
	//const - dany obiekt klasy nie będzie modyfikowany (coś jak propercja get)
	//"=0" - metoda czysto wirtualna bez ciała (jak w interfejsach)
	//
	virtual void Wypisz(std::ostream& out) const = 0; 
	//
	//friend - zadeklarowana zaprzyjaźniona klasa lub funkcja (kożystanie z private/protected pól tej klasy)
	//friend class ZaprzyjaznionaKlasa;
	//friend void ZaprzyjaznionaFunkcja( Klasa & );
	//Uwaga - trzeba podać obiekt tej klasy aby miec do niego dostęp (np. w argumencie konstruktora/funkcji)
	//
	friend std::ostream& operator<<(std::ostream& os, const FiguraPlaska& figura);

public:

	virtual double Pole() = 0;
	virtual double Obwod() = 0;	
	virtual ~FiguraPlaska();
	void przeslanianie();
};