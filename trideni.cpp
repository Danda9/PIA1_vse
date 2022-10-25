#include <iostream>
#include <vector>
#include <fstream>

std::vector<int> nacti_ze_souboru(std::string nazev_souboru){
        std::ifstream soubor(nazev_souboru);
        std::vector<int> vektor(10000);
            for (int i=0; i<10000; ++i){
                int cislo = 0;
                soubor>> cislo;
                vektor[i] = cislo;

        }
     return vektor;
    }

void uloz(std::string nazev, std::vector<int> predmet) {
    std::ofstream soubor(nazev);

    for (int i = 0; i<predmet.size(); ++i) {
        soubor << predmet[i] << "\n";
    }
    //std::cout << predmet.size();
}



void prohod (int& a, int& b)  {
    int pomocna;
    pomocna = b;
    b = a;
    a = pomocna;
}

void setrideni(std::vector<int>& muj1) {

    int k;
    do{
        k = 0;
        for (int i=0; i < muj1.size()-1; ++i) {
            if (muj1[i] > muj1[i+1]) {
                prohod(muj1[i], muj1[i+1]);
                k = k+1;
            }
    }
    } while (k > 0);
}


int main() {
    std::vector<int> muj= nacti_ze_souboru("data.txt");
    //std::vector<int> muj(10);
    //muj = {10,2,8,6,5,1,7,3,9,4};

    setrideni(muj);

   // for (int i=0; i < muj.size(); ++i) {
   //     std::cout<< muj[i]<< "\n";

    //}

    uloz("vysledek.txt",muj);

    return 0;
}
