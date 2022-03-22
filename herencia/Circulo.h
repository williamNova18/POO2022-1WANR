#ifndef CIRCULO_H
#define CIRCULO_H
#include "Figura.h"

class Circulo: public Figura{
    private:
        double radio;

    public:
        Circulo();
        Circulo(double);
        string nombreFigura();
        void dibujar();
        double calcularArea();
        double calcularPerimetro();
};

#endif