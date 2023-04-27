#include "Uzytkownik.h"

string Uzytkownik::getImie() {
	return this->imie;
}

void Uzytkownik::setImie(string imie) {
	this->imie = imie;
}

string Uzytkownik::getNazwisko() {
	return this->nazwisko;
}

void Uzytkownik::setNazwisko(string nazwisko) {
	this->nazwisko = nazwisko;
}

string Uzytkownik::getPesel() {
	return this->pesel;
}

void Uzytkownik::setPesel(string pesel) {
	this->pesel = pesel;
}

string Uzytkownik::getEmail() {
	return this->email;
}

void Uzytkownik::setEmail(string email) {
	this->email = email;
}

string Uzytkownik::getNr_tel() {
	return this->nr_tel;
}

void Uzytkownik::setNr_tel(string nr_tel) {
	this->nr_tel = nr_tel;
}

string Uzytkownik::getLogin() {
	return this->login;
}

void Uzytkownik::setLogin(string login) {
	this->login = login;
}

string Uzytkownik::getHaslo() {
	return this->haslo;
}

void Uzytkownik::setHaslo(string haslo) {
	this->haslo = haslo;
}
