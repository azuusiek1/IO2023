#include "Pozycja_Magazynowa.h"
#include <string>
int Pozycja_Magazynowa::getIdentyfikator() {
	return this->identyfikator;
}

void Pozycja_Magazynowa::setIdentyfikator(int identyfikator) {
	this->identyfikator = identyfikator;
}

int Pozycja_Magazynowa::getIlosc() {
	return this->ilosc;
}

void Pozycja_Magazynowa::setIlosc(int ilosc) {
	this->ilosc = ilosc;
}

std::string Pozycja_Magazynowa::getNazwa() {
	return this->nazwa;
}

void Pozycja_Magazynowa::setNazwa(std::string nazwa) {
	this->nazwa = nazwa;
}

std::string Pozycja_Magazynowa::getProducent() {
	return this->producent;
}

void Pozycja_Magazynowa::setProducent(std::string producent) {
	this->producent = producent;
}

float Pozycja_Magazynowa::getCena_zakupu() {
	return this->cena_zakupu;
}

void Pozycja_Magazynowa::setCena_zakupu(float cena_zakupu) {
	this->cena_zakupu = cena_zakupu;
}

int Pozycja_Magazynowa::getDo_zamowienia() {
	return this->do_zamowienia;
}

void Pozycja_Magazynowa::setDo_zamowienia(int do_zamowienia) {
	this->do_zamowienia = do_zamowienia;
}

std::string Pozycja_Magazynowa::getTyp() {
	return this->typ;
}

void Pozycja_Magazynowa::setTyp(std::string typ) {
	this->typ = typ;
}
