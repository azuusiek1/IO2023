#pragma once
#include "Pracownik.h"
#include <string>
using namespace std;
class Specjalista : Pracownik {

public:
	string specjalizacja;

	string getSpecjalizacja();

	void setSpecjalizacja(string specjalizacja);
};
