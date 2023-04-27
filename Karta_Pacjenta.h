#ifndef KARTA_PACJENTA_H
#define KARTA_PACJENTA_H
#include "Wizyta.h"
#include "Zwierze.h"
#include <string>
class Karta_Pacjenta {

private:
	Wizyta wizyty;
	Zwierze zwierze;
	int data_utworzenia;
	std::string komentarz;

public:
	Wizyta getWizyty();

	void setWizyty(Wizyta wizyty);

	Zwierze getZwierze();

	void setZwierze(Zwierze zwierze);

	int getData_utworzenia();

	void setData_utworzenia(int data_utworzenia);

	std::string getKomentarz();

	void setKomentarz(std::string komentarz);
};

#endif
