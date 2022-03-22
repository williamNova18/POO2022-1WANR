#ifndef FIGURA_H
#define FIGURA_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;


class Figura{
    public:
        Figura();
        virtual string nombreFigura();
        virtual void dibujar();
        virtual double calcularArea();
        virtual double calcularPerimetro();


};

#endif