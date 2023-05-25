#pragma once
#include "Klient.h"
#include "Recepta.h"
#include "Skierowanie.h"
#include "Specjalista.h"
#include "Zwierze.h"
#include "Rachunek.h"
class Klient;
class Rachunek;
class Zwierze;
class Rachunek;
class Recepta;
class Specjalista;
class Skierowanie;
class Wizyta {

private:
	int32_t id;
	int32_t data_wizyty;
	Klient klient;
	Zwierze zwierze;
	Rachunek rachunek;
	Recepta recepta;
	Specjalista specjalista;
	int32_t data_zakonczenia;
	Skierowanie skierowanie;

public:
	Wizyta();
	void getId();

	void setId(int32_t id);

	int32_t getData_wizyty();

	void setData_wizyty(int32_t data_wizyty);

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

	int32_t getData_zakonczenia();

	void setData_zakonczenia(int32_t data_zakonczenia);

	Skierowanie getSkierowanie();

	void setSkierowanie(Skierowanie skierowanie);
};