#include "View.h"

View::View()= default;

void View::agregarFigura(int x, int y, int z, int w){
    if( x == 1 ){
        figurasGeometricas.push_back(new Circulo( y ));
        cout << "Circulo Creado\n";
    }
    else if( x == 2 ){
        figurasGeometricas.push_back(new Cuadrado( z ));
        cout << "Cuadrado Creado\n";
    }
    else if( x == 3 ){
        figurasGeometricas.push_back(new Rectangulo( z, w));
        cout << "Rectangulo Creado\n";
    }
    else if( x == 4 ){
        figurasGeometricas.push_back(new Triangulo( z, w));
        cout << "Triangulo Creado \n";
    }
}

void View::dibujarFiguras(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << "\n\n";
    }
}

void View::dibujarFiguras( int color ){
    switch (color) {
        case 1:
            system( "color 01" );
            break;
        case 2:
            system( "color 02" );
            break;
        case 3:
            system( "color 03" );
            break;
        case 4:
            system( "color 04" );
            break;
        case 5:
            system( "color 05" );
            break;
        case 6:
            system( "color 06" );
            break;
        case 7:
            system( "color 07" );
            break;
        case 8:
            system( "color 08" );
            break;
        case 9:
            system( "color 09" );
            break;
        default:
            cout << "Valor no valido\n";
            return;
    }
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << "\n\n";
    }
    cout <<"Pulse enter para continuar";
    _getch();
    system( "color 07" );

}

void View::mostrarAreas(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << "Area: " << figurasGeometricas[i]->calcularArea() << "\n\n";
    }
}

void View::mostrarPerimetros(){
    for (int i=0; i<figurasGeometricas.size(); i++){
        cout << "Figura #" << i + 1 << ":\n";
        figurasGeometricas[i]->dibujarFiguras();
        cout << figurasGeometricas[i]->calcularPerimetro() << "\n\n";
    }
}

float View::sumarTodasLasAreas(){
    float suma = 0;
    for (int i=0; i<figurasGeometricas.size(); i++){
        suma += figurasGeometricas[i]->calcularArea();
    }
    return suma;
}

