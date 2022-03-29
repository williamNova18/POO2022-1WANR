#include <iostream>
#include "Triangulo.h"

Triangulo::Triangulo()= default;

Triangulo::Triangulo(int base, int altura){
    this -> base = base;
    this -> altura = altura;
}

void Triangulo::dibujarFiguras(){
    cout << " ^\n/_\\ \n";
}

float Triangulo::calcularArea(){
    float area;
    area = ( float(base) * float(altura) ) / 2 ;
    return area;
}

float Triangulo::calcularPerimetro(){
    float perimetro;
    perimetro = float(base + ( 2 * sqrt( pow( altura, 2 ) + pow( ( base/2 ), 2 ) ) ));
    return perimetro;
}
