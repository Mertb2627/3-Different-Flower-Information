#pragma once
#include <string>
using namespace std;



class KLC2023_01_220502006_Bitki
{

public:

	KLC2023_01_220502006_Bitki(string cins, string tur, double uzunluk, int yas, string ulkeler);
    string getCins();
    void setCins(string cins);

    string getTür();
    void setTür(string tur);

    double getUzunluk();
    void setUzunluk(double uzunluk);


    int getYas();
    void setYas(int yas);


    string getUlkeler();
    void setUlkeler(string ulkeler);



    void Bilgi();



private:
    std::string cins;
    std::string tur;
    double uzunluk;
    int yas;
    std::string ulkeler;

};

