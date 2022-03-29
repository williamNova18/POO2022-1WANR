#ifndef CIRCULO_H
#define CIRCULO_H

#include <iostream>
#include <cmath>
#include "FigurasGeometricas.h"


using std::cout;
using std::cin;

class Circulo : public FigurasGeometricas{
    private:
        int radio;
    public:
        explicit Circulo(int radio);
        void dibujarFiguras() override;
        float calcularArea() override;
        float calcularPerimetro() override;
};

#endif
