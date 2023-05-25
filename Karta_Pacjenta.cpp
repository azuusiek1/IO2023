#include "Karta_Pacjenta.h"

Wizyta Karta_Pacjenta::getWizyty() {
	return this->wizyty;
}

void Karta_Pacjenta::setWizyty(Wizyta wizyty) {
	this->wizyty = wizyty;
}

Zwierze Karta_Pacjenta::getZwierze() {
	return this->zwierze;
}

void Karta_Pacjenta::setZwierze(Zwierze zwierze) {
	this->zwierze = zwierze;
}

int32_t Karta_Pacjenta::getData_utworzenia() {
	return this->data_utworzenia;
}

void Karta_Pacjenta::setData_utworzenia(int32_t data_utworzenia) {
	this->data_utworzenia = data_utworzenia;
}

string Karta_Pacjenta::getKomentarz() {
	return this->komentarz;
}

void Karta_Pacjenta::setKomentarz(string komentarz) {
	this->komentarz = komentarz;
}
