#pragma once
#include "FiguraPlaska.h"

class Kolo : public FiguraPlaska {
	double a;
protected:
	void Wypisz(std::ostream& out) const override;
public:
	Kolo(double a);
	double GetA() const;
	void SetA(double a);
	double Obwod() override;
	double Pole() override;

	~Kolo() override;
private:
};

