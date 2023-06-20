#pragma once
#include "Pracownik.h"
class Administrator : Pracownik {

private:
	int32_t dzial;
	int32_t uprawnienia;

public:
	int32_t getDzial();

	void setDzial(int32_t dzial);

	int32_t getUprawnienia();

	void setUprawnienia(int32_t uprawnienia);
};
