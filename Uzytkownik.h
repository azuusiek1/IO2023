#ifndef UZYTKOWNIK_H
#define UZYTKOWNIK_H
#include <string>
using namespace std;
class Uzytkownik {

private:
	int id;
	string imie;
	string nazwisko;
	string pesel;
	string email;
	string nr_tel;
	string login;
	string haslo;

public:
	string getImie();

	void setImie(string imie);

	string getNazwisko();

	void setNazwisko(string nazwisko);

	string getPesel();

	void setPesel(string pesel);

	string getEmail();

	void setEmail(string email);

	string getNr_tel();

	void setNr_tel(string nr_tel);

	string getLogin();

	void setLogin(string login);

	string getHaslo();

	void setHaslo(string haslo);
};

#endif
