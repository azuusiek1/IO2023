#pragma once
#include <string>
#include <vector>
#include "Specjalista.h"
class Specjalista;
class Recepta {

private:
	std::string leki;
	int32_t kod;
	int32_t data_waznosci;
	int32_t refundacja;
	Specjalista wystawiajacy;
	int32_t data_wystawienia;
	std::string posiadacz_zwierzecia;

public:
	std::string getLeki();

	void setLeki(std::string leki);

	int32_t getKod();

	void setKod(int32_t kod);

	int32_t getData_waznosci();

	void setData_waznosci(int32_t data_waznosci);

	int32_t getRefundacja();

	void setRefundacja(int32_t refundacja);

	Specjalista getWystawiajacy();

	void setWystawiajacy(Specjalista wystawiajacy);

	int32_t getData_wystawienia();

	void setData_wystawienia(int32_t data_wystawienia);

	void setPosiadacz_zwierzecia(std::string posiadacz_zwierzecia);

	std::string getPosiadacz_zwierzecia();
};