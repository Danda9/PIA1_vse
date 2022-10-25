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

int main() {
    std::vector<int> muj1= nacti_ze_souboru("data.txt");

    int cislo1;
    int cislo2;
    int pocitadlo1;
    int soucet1;


    cislo1 = 25;
    cislo2 = 8384;
    pocitadlo1 = 0;
    soucet1 = 0;


    for (int i= 0; i < muj1.size(); ++i) {

        if(muj1[i] > cislo1 && muj1[i]<cislo2){

            pocitadlo1 = pocitadlo1 +1;
            soucet1 = soucet1 + muj1[i];

        }

    }



    int pr1;
    pr1 = soucet1/pocitadlo1;



    std::cout << "Pocet cisel vetsich nez " << cislo1 << " a mensich nez " << cislo2 << " je " << pocitadlo1 << "\n";
    std::cout << "Jejich prumer je: " << pr1 << "\n\n";





    return 0;
}

