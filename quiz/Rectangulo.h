#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <iostream>
#include "FigurasGeometricas.h"
#include <conio.h>
#include <cstdlib>
#include<cstring>

using std::cout;
using std::cin;

class Rectangulo : public FigurasGeometricas{
    private:
        int base, altura;
    public:
        Rectangulo();
        Rectangulo(int base, int altura);
        void dibujarFiguras() override;
        float calcularArea() override;
        float calcularPerimetro() override;
};

#endif
