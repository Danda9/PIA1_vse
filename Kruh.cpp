#include "Kruh.h"
#include <iostream>
#include <math.h>
#include <cmath>

Kruh::Kruh(double x_in, double y_in, double r_in)
{
    x = x_in;
    y = y_in;
    r = r_in;
    //ctor
}

void Kruh::vypisInfo() const
{
    std::cout << "Polomer: " << r << ";" << " Souradnice stredu [x,y] = " << "[" << x << ";" << y << "]" << ")\n";

}

double Kruh::obsah()
{
    return r*r*3.14;
}

double Kruh::obvod()
{
    return 2*3.14*r;
}

bool Kruh::leziUvnitr(double bx_in, double by_in)
{
    bx = bx_in;
    by = by_in;
    double vzdalenost;
    vzdalenost = std::sqrt(pow(bx-x,2)+pow(by-y,2));
    if (vzdalenost<r){
        return true;
    }
    else{
        return false;
    }

}

Kruh::~Kruh()
{
    //dtor
}
