#ifndef WIZYTA_H
#define WIZYTA_H
#include "Recepta.h"
#include "Skierowanie.h"
#include "Specjalista.h"
#include "Klient.h"
#include "Rachunek.h"
class Wizyta {

private:
	int id;
	int data_wizyty;
	Klient klient;
	Zwierze zwierze;
	Rachunek rachunek;
	Recepta recepta;
	Specjalista specjalista;
	int data_zakonczenia;
	Skierowanie skierowanie;

public:
	void getId();

	void setId(int id);

	int getData_wizyty();

	void setData_wizyty(int data_wizyty);

	Klient getKlient();

	void setKlient(Klient klient);

	Zwierze getZwierze();

	void setZwierze(Zwierze zwierze);

	Rachunek getRachunek();

	void setRachunek(Rachunek rachunek);

	Recepta getRecepta();

	void setRecepta(Recepta recepta);

	Specjalista getSpecjalista();

	void setSpecjalista(Specjalista specjalista);

	int getData_zakonczenia();

	void setData_zakonczenia(int data_zakonczenia);

	Skierowanie getSkierowanie();

	void setSkierowanie(Skierowanie skierowanie);
};

#endif
