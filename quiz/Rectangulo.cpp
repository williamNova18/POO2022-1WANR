#include <iostream>
#include "Rectangulo.h"

Rectangulo::Rectangulo()= default;

Rectangulo::Rectangulo(int base, int altura){
    this -> base = base;
    this -> altura = altura;
}

void Rectangulo::dibujarFiguras(){
    for(int i = 0; i < altura; i++) {
        for (int j = 0; j < base; j++){
            cout << " * ";
        }
        cout << "\n";
    }
}

float Rectangulo::calcularArea(){
    float area;
    area = float(base) * float(altura);
    return area;
}

float Rectangulo::calcularPerimetro(){
    float perimetro;
    perimetro = float(base * 2 + altura * 2);
    return perimetro;
}