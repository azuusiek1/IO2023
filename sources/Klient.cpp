#include "Klient.h"

std::vector<Zwierze>* Klient::getZwierzeta() {
	return this->zwierzeta;
}

void Klient::setZwierzeta(std::vector<Zwierze>* zwierzeta) {
	this->zwierzeta = zwierzeta;
}
