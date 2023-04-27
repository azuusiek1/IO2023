#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include "Pracownik.h"
class Administrator : Pracownik {

private:
	int dzial;
	int uprawnienia;

public:
	int getDzial();

	void setDzial(int dzial);

	int getUprawnienia();

	void setUprawnienia(int uprawnienia);
};

#endif
