#pragma once
#include "Klient.h"
#include "Pracownik.h"
class Klient;
class Pracownik;
class Rachunek {

private:
	Klient* klient;
	int32_t data_wystawienia;
	int32_t data_oplacenia;
	int32_t kwota;
	Pracownik* wystawiajacy;
	string komentarz;

public:
	Rachunek();
	Klient* getKlient();

	void setKlient(Klient* klient);

	int32_t getData_wystawienia();

	void setData_wystawienia(int32_t data_wystawienia);

	int32_t getData_oplacenia();

	void setData_oplacenia(int32_t data_oplacenia);

	int32_t getKwota();

	void setKwota(int32_t kwota);

	Pracownik* getWystawiajacy();

	void setWystawiajacy(Pracownik* wystawiajacy);

	string getKomentarz();

	void setKomentarz(string komentarz);
};
