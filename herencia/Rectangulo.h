#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Figura.h"

class Rectangulo: public Figura{
    private:
        double base,altura;

    public:
        Rectangulo();
        Rectangulo(double ,double);
        string nombreFigura();
        void dibujar();
        double calcularArea();
        double calcularPerimetro();
};

#endif