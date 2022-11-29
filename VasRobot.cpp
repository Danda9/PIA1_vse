#include "VasRobot.h"
#include <cstdlib>
#include <iostream>

bool VasRobot::start(Bludiste & map) {
    navstiveno.resize(map.n,std::vector <bool> (map.m));
    for(int i=0;i<map.m;i++){
        for(int j=0;j<map.n; j++){
        //navstiveno.push_back(false);
        navstiveno[i][j]=false;
        }
    }

    // Tady muzete doplnit kod pro inicializaci robota

    return true;
}

bool VasRobot::start(BludisteOdkryte & map) {

    // Tady muzete doplnit kod pro inicializaci robota pri prochazeni znameho bludiste

    return true;
}

bool VasRobot::stop() {

    // Tady muzete doplnit kod pro zastaveni robota

   return true;
}

void VasRobot::krok(Bludiste & map) {
    bool kontrola=false;
    int smer;

    do{
    kontrola=false;
    smer=rand()%4;
    if(smer==0){
        map.nahoru();
        if(navstiveno[map.poloha().x][map.poloha().y]==false){
            kontrola=true;
        }
        else{
            map.dolu();
        }
    }
    if(smer==1){
        map.dolu();
        if(navstiveno[map.poloha().x][map.poloha().y]==false){
            kontrola=true;
        }
        else{
            map.nahoru();
        }
    }
    if(smer==2){
        map.vpravo();
        if(navstiveno[map.poloha().x][map.poloha().y]==false){
            kontrola=true;
        }
        else{
            map.vlevo();
        }
    }
    if(smer==3){
        map.vlevo();
        if(navstiveno[map.poloha().x][map.poloha().y]==false){
            kontrola=true;
        }
        else{
            map.vpravo();
        }
    }


    }while(kontrola==false);
    navstiveno[map.poloha().x][map.poloha().y]=true;
    // Tato metoda se bude opakovat, dokud robot nedosahne cile nebo maximalniho poctu kroku
    //std::cout << smer << "\n";
    std::cout << map.poloha().x< " "<< map.poloha().y<< "\n";
}

void VasRobot::krok(BludisteOdkryte & map) {

    // Tato metoda se bude opakovat, dokud robot nedosahne cile nebo maximalniho poctu kroku
    // Verze pro odkryte bludiste

}

std::string VasRobot::jmeno() {

    // Tato metoda by mela vratit jmeno robota
    return "JmenoRobota";
}

void VasRobot::zapisPolohu(Bludiste & map){
    navstiveno[map.poloha().x][map.poloha().y]=true;

}
