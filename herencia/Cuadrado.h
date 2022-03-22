#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figura.h"
using namespace std;

class Cuadrado: public Figura{
    private:
        double lado;
    public:
        Cuadrado();
        Cuadrado(double );
        string nombreFigura();
        void dibujar();
        double calcularArea();
        double calcularPerimetro();
};

#endif