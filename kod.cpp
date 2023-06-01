// kod.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Klient.h"
#include <vector>
#include <memory>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <time.h>
std::time_t getUnixTimestamp(int day, int month, int year, int hour, int minute) {
    std::tm timeStruct = { 0 };

    timeStruct.tm_year = year - 1900;  // Rok przeliczamy na liczbę lat od 1900
    timeStruct.tm_mon = month - 1;     // Miesiące liczone są od 0 do 11
    timeStruct.tm_mday = day;
    timeStruct.tm_hour = hour +1;
    timeStruct.tm_min = minute;

    std::time_t timestamp = std::mktime(&timeStruct);
    return timestamp;
}
string unixTimeToHumanReadable(long int seconds)
{

    // Save the time in Human
    // readable format
    string ans = "";

    // Number of days in month
    // in normal year
    int daysOfMonth[] = { 31, 28, 31, 30, 31, 30,
                          31, 31, 30, 31, 30, 31 };

    long int currYear, daysTillNow, extraTime, extraDays,
        index, date, month, hours, minutes, secondss,
        flag = 0;

    // Calculate total days unix time T
    daysTillNow = seconds / (24 * 60 * 60);
    extraTime = seconds % (24 * 60 * 60);
    currYear = 1970;

    // Calculating current year
    while (true) {
        if (currYear % 400 == 0
            || (currYear % 4 == 0 && currYear % 100 != 0)) {
            if (daysTillNow < 366) {
                break;
            }
            daysTillNow -= 366;
        }
        else {
            if (daysTillNow < 365) {
                break;
            }
            daysTillNow -= 365;
        }
        currYear += 1;
    }
    // Updating extradays because it
    // will give days till previous day
    // and we have include current day
    extraDays = daysTillNow + 1;

    if (currYear % 400 == 0
        || (currYear % 4 == 0 && currYear % 100 != 0))
        flag = 1;

    // Calculating MONTH and DATE
    month = 0, index = 0;
    if (flag == 1) {
        while (true) {

            if (index == 1) {
                if (extraDays - 29 < 0)
                    break;
                month += 1;
                extraDays -= 29;
            }
            else {
                if (extraDays - daysOfMonth[index] < 0) {
                    break;
                }
                month += 1;
                extraDays -= daysOfMonth[index];
            }
            index += 1;
        }
    }
    else {
        while (true) {

            if (extraDays - daysOfMonth[index] < 0) {
                break;
            }
            month += 1;
            extraDays -= daysOfMonth[index];
            index += 1;
        }
    }

    // Current Month
    if (extraDays > 0) {
        month += 1;
        date = extraDays;
    }
    else {
        if (month == 2 && flag == 1)
            date = 29;
        else {
            date = daysOfMonth[month - 1];
        }
    }

    // Calculating HH:MM:YYYY
    hours = extraTime / 3600;
    minutes = (extraTime % 3600) / 60;
    secondss = (extraTime % 3600) % 60;

    ans += to_string(date);
    ans += "/";
    ans += to_string(month);
    ans += "/";
    ans += to_string(currYear);
    ans += " ";
    ans += to_string(hours);
    ans += ":";
    ans += to_string(minutes);
    ans += ":";
    ans += to_string(secondss);

    // Return the time
    return ans;
}

int32_t main()
{
    std::shared_ptr<Klient> klient = std::make_shared<Klient>();

    int32_t option = 0;
    std::cout << "Wybierz opcje:\n 1: Dodaj uzytkownika \n 2. Lista uzytkownikow \n 3. (Uzytkownik) Moje zwierzeta \n 4. (Uzytkownik) Dodaj zwierze\nWprowadz opcje: ";
    std::vector<Zwierze>* zwierzeta = new std::vector<Zwierze>();
    klient->setZwierzeta(zwierzeta);
    Zwierze zwierze = Zwierze();
    zwierze.setImie("Pusia");
    zwierze.setData_ur(getUnixTimestamp(30, 9, 1978, 14, 20));
    zwierzeta->push_back(zwierze);

    std::vector<std::shared_ptr<Uzytkownik>> uzytkownicy;
    std::cin >> option;
    while (option != 0) {
        switch (option) {
        case 1: {
            std::shared_ptr<Uzytkownik> uzytkownik = std::make_shared<Uzytkownik>();
            std::string imie, nazwisko, pesel, email, nr_tel, login, haslo;
            std::cout << "Podaj imie: ";
            std::cin >> imie;
            uzytkownik->setImie(imie);
            std::cout << "Podaj nazwisko: ";
            std::cin >> nazwisko;
            uzytkownik->setNazwisko(nazwisko);
            std::cout << "Podaj pesel: ";
            std::cin >> pesel;
            uzytkownik->setPesel(pesel);
            std::cout << "Podaj email: ";
            std::cin >> email;
            uzytkownik->setEmail(email);
            std::cout << "Podaj nr telefonu: ";
            std::cin >> nr_tel;
            uzytkownik->setNr_tel(nr_tel);
            std::cout << "Podaj login: ";
            std::cin >> login;
            uzytkownik->setLogin(login);
            std::cout << "Podaj haslo: ";
            std::cin >> haslo;
            uzytkownik->setHaslo(haslo);
            uzytkownicy.push_back(uzytkownik);
            break;
        }
        case 2:
        {
            std::cout << "Wszyscy użytkownicy:" << std::endl;
            for (const auto& user : uzytkownicy) {
                std::cout << "Imię: " << user->getImie() << std::endl;
                std::cout << "Nazwisko: " << user->getNazwisko() << std::endl;
                std::cout << "PESEL: " << user->getPesel() << std::endl;
                std::cout << "Email: " << user->getEmail() << std::endl;
                std::cout << "Numer telefonu: " << user->getNr_tel() << std::endl;
                std::cout << "Login: " << user->getLogin() << std::endl;
                std::cout << "Hasło: " << user->getHaslo() << std::endl;
                std::cout << "------------------------" << std::endl;
            }
            break;
        }
        case 3:
        {
            int32_t i = 0;
            for (auto zwierze : *klient->getZwierzeta()) {
                i++;
                std::string ret = "Zwierze " + std::to_string(i) + ", imie: " + zwierze.getImie() +
                    "\ndata urodzenia: " + unixTimeToHumanReadable(zwierze.getData_ur())
                    + "\n---------------------------------------------\n";
                std::cout << ret << std::endl;
            }

            break;
        }
        case 4:
        {
            Zwierze zwierze;

            std::string imie, gatunek, rasa;
            int32_t id, data_ur_day, data_ur_month, data_ur_year, data_ur_hour, data_ur_minute;

            std::cout << "Podaj imie zwierzecia: ";
            std::cin >> imie;
            zwierze.setImie(imie);

            std::cout << "Podaj ID zwierzecia: ";
            std::cin >> id;
            zwierze.setId(id);

            std::cout << "Podaj gatunek zwierzecia: ";
            std::cin >> gatunek;
            zwierze.setGatunek(gatunek);

            std::cout << "Podaj rase zwierzecia: ";
            std::cin >> rasa;
            zwierze.setRasa(rasa);

            std::cout << "Podaj dzien urodzenia zwierzecia: ";
            std::cin >> data_ur_day;

            std::cout << "Podaj miesiac urodzenia zwierzecia: ";
            std::cin >> data_ur_month;

            std::cout << "Podaj rok urodzenia zwierzecia: ";
            std::cin >> data_ur_year;

            std::cout << "Podaj godzine urodzenia zwierzecia: ";
            std::cin >> data_ur_hour;

            std::cout << "Podaj minute urodzenia zwierzecia: ";
            std::cin >> data_ur_minute;

            int32_t data_ur_timestamp = getUnixTimestamp(data_ur_day, data_ur_month, data_ur_year, data_ur_hour, data_ur_minute);
            zwierze.setData_ur(data_ur_timestamp);

            Karta_Pacjenta* karta_pacjenta = new Karta_Pacjenta(); // Tworzenie nowej karty pacjenta
            zwierze.setKarta_pacjenta(karta_pacjenta);
            zwierzeta->push_back(zwierze);
            break;
        }
        case 5:
        {
            std::time_t now = std::time(nullptr);
            std::tm timeinfo{};

            // Użycie localtime_s do pobrania lokalnego czasu
            localtime_s(&timeinfo, &now);

            int day = timeinfo.tm_mday;
            int month = timeinfo.tm_mon + 1;
            int year = timeinfo.tm_year + 1900;

            std::cout << "Dostepne godziny: " << std::endl;
            for (int i = day + 1; i < day + 5; i++) {
                for (int j = 0; j < 5; j++)
                    std::cout << unixTimeToHumanReadable(getUnixTimestamp(i, month, year, 10 + j, 0)) << std::endl;
            }
            break;
        }
        }
        std::cout << "Wybierz opcje:\n 1: Dodaj uzytkownika \n 2. Lista uzytkownikow \n 3. (Uzytkownik) Moje zwierzeta \n 4. (Uzytkownik) Dodaj zwierze\nWprowadz opcje: ";
        std::cin >> option;
    }
}