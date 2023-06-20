#pragma once
#include <string>
class Pozycja_Magazynowa {

private:
	int32_t identyfikator;
	int32_t ilosc;
	std::string nazwa;
	std::string producent;
	float cena_zakupu;
	int32_t do_zamowienia;
	std::string typ;

public:
	int32_t getIdentyfikator();

	void setIdentyfikator(int32_t identyfikator);

	int32_t getIlosc();

	void setIlosc(int32_t ilosc);

	std::string getNazwa();

	void setNazwa(std::string nazwa);

	std::string getProducent();

	void setProducent(std::string producent);

	float getCena_zakupu();

	void setCena_zakupu(float cena_zakupu);

	int32_t getDo_zamowienia();

	void setDo_zamowienia(int32_t do_zamowienia);

	std::string getTyp();

	void setTyp(std::string typ);
};
