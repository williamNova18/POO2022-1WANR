#include <iostream>
#include "Cuadrado.h"

Cuadrado::Cuadrado(int lado){
    this -> lado = lado;
}

void Cuadrado::dibujarFiguras(){
    for (int i = 0; i < lado; ++i) {
        for (int j = 0; j < lado; ++j) {
            cout <<" * ";
        }
        cout << "\n";
    }
}

float Cuadrado::calcularArea(){
    float area;
    area = float(lado * lado);
    return area;
}

float Cuadrado::calcularPerimetro(){
    float perimetro;
    perimetro = float(lado + lado + lado + lado);
    return perimetro;
}