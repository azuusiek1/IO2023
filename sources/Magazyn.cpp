#include "Magazyn.h"

Pozycja_Magazynowa Magazyn::getPozycje() {
	return this->pozycje;
}

void Magazyn::setPozycje(Pozycja_Magazynowa pozycje) {
	this->pozycje = pozycje;
}
