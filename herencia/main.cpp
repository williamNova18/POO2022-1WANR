#include <iostream>
#include "Figura.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Circulo.h"
using namespace std;


int main(){
    vector<Figura *> figuras;
    double lado,base,altura,radio,sumaAreas;
    int op = 1,figura,i;
    while(op != 0){
        cout<<"Ingrese 0 para salir"<<endl;
        cout<<"Ingrese 1 para agregar una figura geometrica"<<endl;
        cout<<"Ingrese 2 para dibujar todas las figuras geometricas"<<endl;
        cout<<"Ingrese 3 para mostrar el area de todas las figuras geometricas"<<endl;
        cout<<"Ingrese 4 para mostrar el perimetro de todas las figuras geometricas"<<endl;
        cout<<"Ingrese 5 para mostrar la suma de las areas de todas las figuras"<<endl;
        cin>>op;
        if(op == 1){
            cout<<"Ingrese 1 para agregar un cuadrado"<<endl;
            cout<<"Ingrese 2 para agregar un rectangulo"<<endl;
            cout<<"Ingrese 3 para agregar un circulo"<<endl;
            cin>>figura;
            if(figura == 1){
                cout<<"Ingrese medida del lado: ";
                cin>>lado;
                figuras.push_back(new Cuadrado(lado));
                

            }
            else if(figura == 2){
                cout<<"Ingrese medida de la base: ";
                cin>>base;
                cout<<"Ingrese medida de la altura: ";
                cin>>altura;
                figuras.push_back(new Rectangulo(base,altura));
            }
            else{
                cout<<"Ingrese medida del radio: ";
                cin>>radio;
                figuras.push_back(new Circulo(radio));

            }

        }
        else if(op == 2){
            for(i = 0; i < figuras.size();i++){
                cout<<figuras[i]->nombreFigura()<<endl;
                figuras[i]->dibujar();
            }

        }
        else if(op == 3){
            for(i = 0; i < figuras.size();i++){
                cout<<figuras[i]->nombreFigura()<<endl;
                cout<<"El area es: "<<figuras[i]->calcularArea()<<endl;
                cout<<"---------------------------"<<endl;
            }

        }
        else if(op == 4){
            
            for(i = 0; i < figuras.size();i++){
                cout<<figuras[i]->nombreFigura()<<endl;
                cout<<"El perimetro es: "<<figuras[i]->calcularPerimetro()<<endl;
                cout<<"---------------------------"<<endl;
            }
        }
        else if(op == 5){
            sumaAreas = 0.0;
            for(i = 0; i < figuras.size();i++){
                sumaAreas += figuras[i]->calcularArea();
            }
            cout<<"La suma es "<<sumaAreas<<endl;
        }
    }
    return 0;
}