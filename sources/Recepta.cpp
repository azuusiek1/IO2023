#include "Recepta.h"
#include <string>
using namespace std;
string Recepta::getLeki() {
	return this->leki;
}

void Recepta::setLeki(string leki) {
	this->leki = leki;
}

int32_t Recepta::getKod() {
	return this->kod;
}

void Recepta::setKod(int32_t kod) {
	this->kod = kod;
}

int32_t Recepta::getData_waznosci() {
	return this->data_waznosci;
}

void Recepta::setData_waznosci(int32_t data_waznosci) {
	this->data_waznosci = data_waznosci;
}

int32_t Recepta::getRefundacja() {
	return this->refundacja;
}

void Recepta::setRefundacja(int32_t refundacja) {
	this->refundacja = refundacja;
}

Specjalista Recepta::getWystawiajacy() {
	return this->wystawiajacy;
}

void Recepta::setWystawiajacy(Specjalista wystawiajacy) {
	this->wystawiajacy = wystawiajacy;
}

int32_t Recepta::getData_wystawienia() {
	return this->data_wystawienia;
}

void Recepta::setData_wystawienia(int32_t data_wystawienia) {
	this->data_wystawienia = data_wystawienia;
}

void Recepta::setPosiadacz_zwierzecia(string posiadacz_zwierzecia) {
	this->posiadacz_zwierzecia = posiadacz_zwierzecia;
}

string Recepta::getPosiadacz_zwierzecia() {
	return this->posiadacz_zwierzecia;
}
