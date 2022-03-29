#ifndef TRIANGULO_H
#define TRIANGULO_H

#include <iostream>
#include <cmath>
#include "FigurasGeometricas.h"

using std::cout;
using std::cin;


class Triangulo : public FigurasGeometricas{
private:
    int base, altura;
public:
    Triangulo();
    Triangulo(int base, int altura);
    void dibujarFiguras() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};

#endif
