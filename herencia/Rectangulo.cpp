#include "Rectangulo.h"

Rectangulo::Rectangulo(){

}

Rectangulo::Rectangulo(double base,double altura){
    this->base = base;
    this->altura = altura;
}

string Rectangulo::nombreFigura(){
    return "Rectangulo";
}

void Rectangulo::dibujar(){
    int i,j;
    vector<string> dibujo;
    string s = "";
    for(i = 0; i < base;i++)
        s += "*";
    dibujo.push_back(s);
    for(i = 0; i < altura-2;i++){
        s = "";
        for(j = 0; j < base;j++){
            if(j == 0 || j +1 >= base)
                s += "*";
            else
                s += " ";
        }
        dibujo.push_back(s);
    }
    s = "";
    for(i = 0; i < base;i++)
        s += "*";
    dibujo.push_back(s);
    for(i = 0; i < dibujo.size();i++)
        cout<<dibujo[i]<<endl;


}

double Rectangulo::calcularPerimetro(){
    return (2.0*base)+(2.0*altura);
}

double Rectangulo::calcularArea(){
    return base*altura;
}