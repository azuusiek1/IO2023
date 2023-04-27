#include "Wizyta.h"
#include "Klient.h"
#include "Zwierze.h"
#include "Rachunek.h"
void Wizyta::getId() {
	// TODO - implement Wizyta::getId
	throw "Not yet implemented";
}

void Wizyta::setId(int id) {
	this->id = id;
}

int Wizyta::getData_wizyty() {
	return this->data_wizyty;
}

void Wizyta::setData_wizyty(int data_wizyty) {
	this->data_wizyty = data_wizyty;
}

Klient Wizyta::getKlient() {
	return this->klient;
}

void Wizyta::setKlient(Klient klient) {
	this->klient = klient;
}

Zwierze Wizyta::getZwierze() {
	return this->zwierze;
}

void Wizyta::setZwierze(Zwierze zwierze) {
	this->zwierze = zwierze;
}

Rachunek Wizyta::getRachunek() {
	return this->rachunek;
}

void Wizyta::setRachunek(Rachunek rachunek) {
	this->rachunek = rachunek;
}

Recepta Wizyta::getRecepta() {
	return this->recepta;
}

void Wizyta::setRecepta(Recepta recepta) {
	this->recepta = recepta;
}

Specjalista Wizyta::getSpecjalista() {
	return this->specjalista;
}

void Wizyta::setSpecjalista(Specjalista specjalista) {
	this->specjalista = specjalista;
}

int Wizyta::getData_zakonczenia() {
	return this->data_zakonczenia;
}

void Wizyta::setData_zakonczenia(int data_zakonczenia) {
	this->data_zakonczenia = data_zakonczenia;
}

Skierowanie Wizyta::getSkierowanie() {
	return this->skierowanie;
}

void Wizyta::setSkierowanie(Skierowanie skierowanie) {
	this->skierowanie = skierowanie;
}
