#include "KLC2023_01_220502006_Bitki.h"
#include <iostream>

KLC2023_01_220502006_Bitki::KLC2023_01_220502006_Bitki(string cins, string tur, double uzunluk, int yas, string ulkeler)
    : cins(cins), tur(tur), uzunluk(uzunluk), yas(yas), ulkeler(ulkeler) {}

string KLC2023_01_220502006_Bitki::getCins() { return cins; }
void KLC2023_01_220502006_Bitki::setCins(string cins) { this->cins = cins; }

std::string KLC2023_01_220502006_Bitki::getTür() { return tur; }
void KLC2023_01_220502006_Bitki::setTür(std::string tur) { this->tur = tur; }

double KLC2023_01_220502006_Bitki::getUzunluk() { return uzunluk; }
void KLC2023_01_220502006_Bitki::setUzunluk(double uzunluk) { this->uzunluk = uzunluk; }

int KLC2023_01_220502006_Bitki::getYas() { return yas; }
void KLC2023_01_220502006_Bitki::setYas(int yas) { this->yas = yas; }

string KLC2023_01_220502006_Bitki::getUlkeler() { return ulkeler; }
void KLC2023_01_220502006_Bitki::setUlkeler(string ulkeler) { this->ulkeler = ulkeler; }

void KLC2023_01_220502006_Bitki::Bilgi()
{
    std::cout << "Genus: " << cins << std::endl
        << "Type: " << tur << std::endl
        << "Length: " << uzunluk << " cm" << std::endl
        << "Age: " << yas << " year" << std::endl
        << "Homeland: " << ulkeler << std::endl
        << std::endl;
}
