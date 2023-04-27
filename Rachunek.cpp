#include "Rachunek.h"
#include "Klient.h"
#include "Pracownik.h"
Klient Rachunek::getKlient() {
	return this->klient;
}

void Rachunek::setKlient(Klient klient) {
	this->klient = klient;
}

int Rachunek::getData_wystawienia() {
	return this->data_wystawienia;
}

void Rachunek::setData_wystawienia(int data_wystawienia) {
	this->data_wystawienia = data_wystawienia;
}

int Rachunek::getData_oplacenia() {
	return this->data_oplacenia;
}

void Rachunek::setData_oplacenia(int data_oplacenia) {
	this->data_oplacenia = data_oplacenia;
}

int Rachunek::getKwota() {
	return this->kwota;
}

void Rachunek::setKwota(int kwota) {
	this->kwota = kwota;
}

Pracownik Rachunek::getWystawiajacy() {
	return this->wystawiajacy;
}

void Rachunek::setWystawiajacy(Pracownik wystawiajacy) {
	this->wystawiajacy = wystawiajacy;
}

string Rachunek::getKomentarz() {
	return this->komentarz;
}

void Rachunek::setKomentarz(string komentarz) {
	this->komentarz = komentarz;
}
