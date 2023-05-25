#pragma once
#include <string>
#include "Zwierze.h"
#include "Wizyta.h"

class Zwierze;
class Wizyta;
class Karta_Pacjenta {

private:
	Wizyta wizyty;
	Zwierze zwierze;
	int32_t data_utworzenia;
	std::string komentarz;

public:
	Wizyta getWizyty();

	void setWizyty(Wizyta wizyty);

	Zwierze getZwierze();

	void setZwierze(Zwierze zwierze);

	int32_t getData_utworzenia();

	void setData_utworzenia(int32_t data_utworzenia);

	std::string getKomentarz();

	void setKomentarz(std::string komentarz);
};
