#ifndef ZWIERZE_H
#define ZWIERZE_H
#include <string>
#include "Klient.h"
#include "Karta_Pacjenta.h"
using namespace std;
class Zwierze {

private:
	string imie;
	int id;
	string gatunek;
	string rasa;
	int data_ur;
	Klient wlasciciel;
	Karta_Pacjenta karta_pacjenta;

public:
	string getImie();

	void setImie(string imie_zwierzecia);

	int getId();

	void setId(int id);

	string getGatunek();

	void setGatunek(string gatunek);

	string getRasa();

	void setRasa(string rasa);

	int getData_ur();

	void setData_ur(int data_ur);

	Klient getWlasciciel();

	void setWlasciciel(Klient wlasciciel);

	Karta_Pacjenta getKarta_pacjenta();

	void setKarta_pacjenta(Karta_Pacjenta karta_pacjenta);
};

#endif
