#pragma once
#include <string>
#include "Klient.h"
#include "Karta_Pacjenta.h"
using namespace std;
class Klient;
class Karta_Pacjenta;
class Zwierze {
	
	string imie;
	int32_t id;
	string gatunek;
	string rasa;
	int32_t data_ur;
	Klient* wlasciciel;
	Karta_Pacjenta* karta_pacjenta;

public:
	string getImie();

	void setImie(string imie_zwierzecia);

	int32_t getId();

	void setId(int32_t id);

	string getGatunek();

	void setGatunek(string gatunek);

	string getRasa();

	void setRasa(string rasa);

	int32_t getData_ur();

	void setData_ur(int32_t data_ur);

	Klient* getWlasciciel();

	void setWlasciciel(Klient* wlasciciel);

	Karta_Pacjenta* getKarta_pacjenta();

	void setKarta_pacjenta(Karta_Pacjenta* karta_pacjenta);
};
