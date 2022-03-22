#include "Cuadrado.h"

Cuadrado::Cuadrado(){

}

Cuadrado::Cuadrado(double lado){
    this->lado = lado;
}

string Cuadrado::nombreFigura(){
    return "Cuadrado";
}

void Cuadrado::dibujar(){
    int i,j;
    vector<string> dibujo;
    string s = "";
    for(i = 0; i < lado;i++)
        s += "*";
    dibujo.push_back(s);
    for(i = 0; i < lado-2;i++){
        s = "";
        for(j = 0; j < lado;j++){
            if(j == 0 || j +1 >= lado)
                s += "*";
            else
                s += " ";
        }
        dibujo.push_back(s);
    }
    s = "";
    for(i = 0; i < lado;i++)
        s += "*";
    dibujo.push_back(s);
    for(i = 0; i < dibujo.size();i++)
        cout<<dibujo[i]<<endl;


}

double Cuadrado::calcularPerimetro(){
    return 4.0*lado;
}

double Cuadrado::calcularArea(){
    return lado*lado;
}