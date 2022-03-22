#include "Circulo.h"
# define M_PI           3.14159265358979323846  /* pi */
Circulo::Circulo(){

}

Circulo::Circulo(double radio){
    this->radio = radio;
}

string Circulo::nombreFigura(){
    return "Circulo";
}

void Circulo::dibujar(){
    int i,j;
    double N = (2.0*radio)+1.0,x,y;
    vector<string> dibujo;
    string s = "";
    for(i = 0; i< N;i++){
        s = "";
        for(j = 0; j < N;j++){
            x=i-radio;
            y = j-radio;
            if(x*x + y*y <= radio*radio+1)
                s += "*";
            
            else 
                s += " ";
            s += " ";
        }
        dibujo.push_back(s);
    }
    for(i = 0; i < dibujo.size();i++)
        cout<<dibujo[i]<<endl;


}

double Circulo::calcularPerimetro(){
    return (2.0*M_PI*radio);
}

double Circulo::calcularArea(){
    return M_PI*(radio*radio);
}