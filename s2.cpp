#include <iostream>
#include <vector>
#include <fstream>
#include <list>
#include <iterator>

std::list<int> nacti_ze_souboru(std::string nazev_souboru){
        std::ifstream soubor(nazev_souboru);
        std::list<int> vektor(10000);
        for(std::list<int>::iterator it = vektor.begin(); it != vektor.end(); it++) {
                int cislo = 0;
                soubor>> cislo;
                *it = cislo;

        }
     return vektor;
    }



void setrideni(std::list<int>& muj1) {

    int k;
    do{
        k = 0;
        for(std::list<int>::iterator it = muj1.begin(); it != muj1.end(); it++) {
            std::list<int>::iterator it2 = std::next(it,1);
            if (it != muj1.end()) {
            if (*it > *it2) {
                muj1.insert(std::next(it,1),*it);
                k = k+1;
            }
    }
    }
    } while (k > 0);
    std::cout << "::::"<< k << "\n";
}

void uloz(std::string nazev, std::list<int> predmet) {
    std::ofstream soubor(nazev);

    for(std::list<int>::iterator it = predmet.begin(); it != predmet.end(); it++) {
        soubor << *it << "\n";
    }
    //std::cout << predmet.size();
}


int main() {
    //std::list<int> muj= nacti_ze_souboru("data.txt");
    std::list<int> muj(10);
    muj = {10,2,8,6,5,1,7,3,9,4};

    setrideni(muj);

    for(std::list<int>::iterator it = muj.begin(); it != muj.end(); it++) {
        std::cout << *it << "\n";
        }

   // for (int i=0; i < muj.size(); ++i) {
   //     std::cout<< muj[i]<< "\n";

    //}

    uloz("vysledek.txt",muj);

    return 0;
}
