#ifndef RACHUNEK_H
#define RACHUNEK_H

class Rachunek {

private:
	Klient klient;
	int data_wystawienia;
	int data_oplacenia;
	int kwota;
	Pracownik wystawiajacy;
	string komentarz;

public:
	Klient getKlient();

	void setKlient(Klient klient);

	int getData_wystawienia();

	void setData_wystawienia(int data_wystawienia);

	int getData_oplacenia();

	void setData_oplacenia(int data_oplacenia);

	int getKwota();

	void setKwota(int kwota);

	Pracownik getWystawiajacy();

	void setWystawiajacy(Pracownik wystawiajacy);

	string getKomentarz();

	void setKomentarz(string komentarz);
};

#endif
