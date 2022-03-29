#ifndef CUADRADO_H
#define CUADRADO_H

#include <iostream>
#include "FigurasGeometricas.h"

using std::cout;
using std::cin;

class Cuadrado : public FigurasGeometricas{
    private:
        int lado;
    public:
        Cuadrado();
        Cuadrado(int lado);
        void dibujarFiguras() override;
        float calcularArea() override;
        float calcularPerimetro() override;
};

#endif