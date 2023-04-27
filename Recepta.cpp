#include "Recepta.h"
#include <string>
using namespace std;
string Recepta::getLeki() {
	return this->leki;
}

void Recepta::setLeki(string leki) {
	this->leki = leki;
}

int Recepta::getKod() {
	return this->kod;
}

void Recepta::setKod(int kod) {
	this->kod = kod;
}

int Recepta::getData_waznosci() {
	return this->data_waznosci;
}

void Recepta::setData_waznosci(int data_waznosci) {
	this->data_waznosci = data_waznosci;
}

int Recepta::getRefundacja() {
	return this->refundacja;
}

void Recepta::setRefundacja(int refundacja) {
	this->refundacja = refundacja;
}

Specjalista Recepta::getWystawiajacy() {
	return this->wystawiajacy;
}

void Recepta::setWystawiajacy(Specjalista wystawiajacy) {
	this->wystawiajacy = wystawiajacy;
}

int Recepta::getData_wystawienia() {
	return this->data_wystawienia;
}

void Recepta::setData_wystawienia(int data_wystawienia) {
	this->data_wystawienia = data_wystawienia;
}

void Recepta::setPosiadacz_zwierzecia(string posiadacz_zwierzecia) {
	this->posiadacz_zwierzecia = posiadacz_zwierzecia;
}

string Recepta::getPosiadacz_zwierzecia() {
	return this->posiadacz_zwierzecia;
}
