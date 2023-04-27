#ifndef SKIEROWANIE_H
#define SKIEROWANIE_H
#include <string>
using namespace std;
class Skierowanie {

private:
	string poradnia;
	int data_wystawienia;
	int data_waznosci;
	Specjalista wystawiajacy;
	string przyczyna;

public:
	string getPoradnia();

	void setPoradnia(string poradnia);

	int getData_wystawienia();

	void setData_wystawienia(int data_wystawienia);

	int getData_waznosci();

	void setData_waznosci(int data_waznosci);

	Specjalista getWystawiajacy();

	void setWystawiajacy(Specjalista wystawiajacy);

	string getPrzyczyna();

	void setPrzyczyna(string przyczyna);
};

#endif
