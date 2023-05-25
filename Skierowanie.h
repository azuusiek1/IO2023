#pragma once
#include <string>
#include "Specjalista.h"
class Specjalista;
using namespace std;
class Skierowanie {

private:
	string poradnia;
	int32_t data_wystawienia;
	int32_t data_waznosci;
	Specjalista wystawiajacy;
	string przyczyna;

public:
	string getPoradnia();

	void setPoradnia(string poradnia);

	int32_t getData_wystawienia();

	void setData_wystawienia(int32_t data_wystawienia);

	int32_t getData_waznosci();

	void setData_waznosci(int32_t data_waznosci);

	Specjalista getWystawiajacy();

	void setWystawiajacy(Specjalista wystawiajacy);

	string getPrzyczyna();

	void setPrzyczyna(string przyczyna);
};
