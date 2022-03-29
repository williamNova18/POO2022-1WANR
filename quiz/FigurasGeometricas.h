#ifndef FIGURASGEOMETRICAS_H
#define FIGURASGEOMETRICAS_H

#include <iostream>

using std::cin;
using std::cout;

class FigurasGeometricas{
    public:
        FigurasGeometricas();
        virtual void dibujarFiguras() = 0;
        virtual float calcularArea() = 0;
        virtual float calcularPerimetro() = 0;
};
#endif
