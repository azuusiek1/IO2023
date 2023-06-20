#pragma once
#include "Pozycja_Magazynowa.h"
class Magazyn {

private:
	Pozycja_Magazynowa pozycje;

public:
	Pozycja_Magazynowa getPozycje();

	void setPozycje(Pozycja_Magazynowa pozycje);
};

