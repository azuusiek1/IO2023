#pragma once
#include "Uzytkownik.h"
#include "Zwierze.h"
class Zwierze;
#include<vector>
class Klient : Uzytkownik {

private:
	std::vector<Zwierze> zwierzeta;
public:
	std::vector<Zwierze> getZwierzeta();

	void setZwierzeta(std::vector<Zwierze>);
};
