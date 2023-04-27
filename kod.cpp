// kod.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Klient.h"
#include <vector>

int main()
{
    Klient* klient = new Klient();
    std::vector<Zwierze> zwierzeta;
    Zwierze zwierze = Zwierze();
    zwierze.setImie("Pusia");
    zwierzeta.push_back(zwierze);
    klient->setZwierzeta(zwierzeta);
    int i = 0;
    for (auto zwierze : klient->getZwierzeta()) {
        i++;
        std::string ret = "Zwierze " + std::to_string(i) + ", imie: " + zwierze.getImie();
        std::cout << ret << std::endl;
    }
}