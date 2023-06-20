#include "Zwierze.h"
string Zwierze::getImie() {
	return this->imie;
}

void Zwierze::setImie(string imie_zwierzecia) {
	this->imie = imie_zwierzecia;
}

int32_t Zwierze::getId() {
	return this->id;
}

void Zwierze::setId(int32_t id) {
	this->id = id;
}

string Zwierze::getGatunek() {
	return gatunek;
}

void Zwierze::setGatunek(string gatunek) {
	this->gatunek = gatunek;
}

string Zwierze::getRasa() {
	return rasa;
}

void Zwierze::setRasa(string rasa) {
	this->rasa = rasa;
}

int32_t Zwierze::getData_ur() {
	return this->data_ur;
}

void Zwierze::setData_ur(int32_t data_ur) {
	this->data_ur = data_ur;
}

Klient* Zwierze::getWlasciciel() {
	return this->wlasciciel;
}

void Zwierze::setWlasciciel(Klient* wlasciciel) {
	this->wlasciciel = wlasciciel;
}

Karta_Pacjenta* Zwierze::getKarta_pacjenta() {
	return this->karta_pacjenta;
}

void Zwierze::setKarta_pacjenta(Karta_Pacjenta* karta_pacjenta) {
	this->karta_pacjenta = karta_pacjenta;
}
