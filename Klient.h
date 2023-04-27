#ifndef KLIENT_H
#define KLIENT_H
#include "Uzytkownik.h"
#include "Zwierze.h"
#include<vector>
class Klient : Uzytkownik {

private:
	std::vector<Zwierze> zwierzeta;
public:
	std::vector<Zwierze> getZwierzeta();

	void setZwierzeta(std::vector<Zwierze>);
};

#endif
