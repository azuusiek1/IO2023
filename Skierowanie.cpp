#include "Skierowanie.h"
#include "Specjalista.h"
string Skierowanie::getPoradnia() {
	return this->poradnia;
}

void Skierowanie::setPoradnia(string poradnia) {
	this->poradnia = poradnia;
}

int Skierowanie::getData_wystawienia() {
	return this->data_wystawienia;
}

void Skierowanie::setData_wystawienia(int data_wystawienia) {
	this->data_wystawienia = data_wystawienia;
}

int Skierowanie::getData_waznosci() {
	return this->data_waznosci;
}

void Skierowanie::setData_waznosci(int data_waznosci) {
	this->data_waznosci = data_waznosci;
}

Specjalista Skierowanie::getWystawiajacy() {
	return this->wystawiajacy;
}

void Skierowanie::setWystawiajacy(Specjalista wystawiajacy) {
	this->wystawiajacy = wystawiajacy;
}

string Skierowanie::getPrzyczyna() {
	return this->przyczyna;
}

void Skierowanie::setPrzyczyna(string przyczyna) {
	this->przyczyna = przyczyna;
}
