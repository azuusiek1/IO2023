#ifndef POZYCJA_MAGAZYNOWA_H
#define POZYCJA_MAGAZYNOWA_H
#include <string>
class Pozycja_Magazynowa {

private:
	int identyfikator;
	int ilosc;
	std::string nazwa;
	std::string producent;
	float cena_zakupu;
	int do_zamowienia;
	std::string typ;

public:
	int getIdentyfikator();

	void setIdentyfikator(int identyfikator);

	int getIlosc();

	void setIlosc(int ilosc);

	std::string getNazwa();

	void setNazwa(std::string nazwa);

	std::string getProducent();

	void setProducent(std::string producent);

	float getCena_zakupu();

	void setCena_zakupu(float cena_zakupu);

	int getDo_zamowienia();

	void setDo_zamowienia(int do_zamowienia);

	std::string getTyp();

	void setTyp(std::string typ);
};

#endif
