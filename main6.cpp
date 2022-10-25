#include <iostream>
#include <vector>
#include "Kruh.h"

int main() {
    // Trida Kruh bude vytvorena pomoci konstruktoru Kruh(r,x,y), kde r je polomer a x,y souradnice stredu kruhu
    std::vector<Kruh> utvary = {Kruh(1,1,1), Kruh(0.5,0,0), Kruh(1.2,1,0)};

    for (Kruh k : utvary) {
        k.vypisInfo(); // Tato metoda ma za ukol vypsat na obrazovku definici daneho kruhu (polomer, stred)

        std::cout << "Obsah kruhu = " << k.obsah() << ", obvod kruhu = " << k.obvod() << "\n";

        if (k.leziUvnitr(0.3,0.3)) {
            std::cout << "Bod se souradnicemi (0.3,0.3) lezi uvnitr tohoto kruhu.\n\n";
        }
        else {
            std::cout << "Bod se souradnicemi (0.3,0.3) nelezi uvnitr tohoto kruhu.\n\n";
        }
    }
}
