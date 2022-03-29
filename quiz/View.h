#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <vector>
#include "FigurasGeometricas.h"

#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include <conio.h>
#include <cstdlib>
#include<cstring>

using namespace std;
using std::cout;
using std::cin;
using std::vector;


class View{
    private:
        vector<FigurasGeometricas*>figurasGeometricas;
    public:
        View();
        void agregarFigura(int x, int y, int z, int w);
        virtual void dibujarFiguras();
        virtual void dibujarFiguras( int color );
        void mostrarAreas();
        void mostrarPerimetros();
        float sumarTodasLasAreas();
};
#endif
