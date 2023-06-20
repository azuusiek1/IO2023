#pragma once
#include "Uzytkownik.h"
class Pracownik : Uzytkownik {

public:
	int32_t data_zatrudnienia;

	int32_t getData_zatrudnienia();

	void setData_zatrudnienia(int32_t data_zatrudnienia);
};

