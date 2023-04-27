#ifndef RECEPTA_H
#define RECEPTA_H
#include <string>
#include <vector>
#include "Specjalista.h"
class Recepta {

private:
	std::string leki;
	int kod;
	int data_waznosci;
	int refundacja;
	Specjalista wystawiajacy;
	int data_wystawienia;
	std::string posiadacz_zwierzecia;

public:
	std::string getLeki();

	void setLeki(std::string leki);

	int getKod();

	void setKod(int kod);

	int getData_waznosci();

	void setData_waznosci(int data_waznosci);

	int getRefundacja();

	void setRefundacja(int refundacja);

	Specjalista getWystawiajacy();

	void setWystawiajacy(Specjalista wystawiajacy);

	int getData_wystawienia();

	void setData_wystawienia(int data_wystawienia);

	void setPosiadacz_zwierzecia(std::string posiadacz_zwierzecia);

	std::string getPosiadacz_zwierzecia();
};

#endif
