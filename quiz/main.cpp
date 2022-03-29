#include <iostream>
#include "View.h"

using std::cout;
using std::cin;
using std::string;

void menu(View view){
    int opc, x, color, y, z;
    do{
        cout << "\n" << "BIENVENIDOS A FIGURAS.COM\n";
        cout << "1. Agregar figuras.\n";     //Agregar Circulo, Cuadrado O Rectangulo.
        cout << "2. Dibujar figuras.\n";     //Dibujar Todas Las Figuras.
        cout << "3. Calcular Areas/Sumas Figuras.\n";  //Calcular Todas Las Areas O Sumar Todas Las Areas.
        cout << "4. Calcular Perimetros Figuras.\n";   //Calcular Todos Los Promedios.
        cout << "5. Dibujar figuras con color.\n";   //Calcular Todos Los Promedios.
        cout << "0. Salir\n";
        cout << "Opc: ";
        x = 0;
        cin >> opc;
        cout << "\n";
        switch(opc){
            case 1: cout << "1. Agregar Circulo\n";
                cout << "2. Agregar Cuadrado\n";
                cout << "3. Agregar Rectangulo\n";
                cout << "4. Agregar Triangulo\n";
                cout << "opc: ";
                cin >> x;
                if( x == 1 ){
                    cout << "Ingrese El Radio: ";
                    cin >> y;
                    view.agregarFigura( x, y, 0.0, 0.0);
                }
                else if( x == 2 ){
                    cout << "Ingrese EL Lado: ";
                    cin >> y;
                    view.agregarFigura( x , 0.0, y, 0.0);
                }
                else if ( x == 3 ){
                    cout << "Ingrese La Base: ";
                    cin >> y;
                    cout << "Ingrese La Altura: ";
                    cin >> z;
                    view.agregarFigura( x, 0.0, y, z );
                }
                else if ( x == 4 ){
                    cout << "Ingrese La Base: ";
                    cin >> y;
                    cout << "Ingrese La Altura: ";
                    cin >> z;
                    view.agregarFigura( x, 0.0, y, z );
                }
                else{
                    cout << "Error, Figura No Encontrada.\n";
                }
                break;
            case 2: view.dibujarFiguras();
                    break;
            case 3: cout << "1. Calcular Todas Las Areas.\n";
                cout << "2. Calcular La Suma De Todas Las Areas.\n";
                cout << "Opc: ";
                cin >> x;
                if( x == 1 ){
                    view.mostrarAreas();
                }
                else if( x == 2 ){
                    cout << "La Suma De Todas Las Areas De Las Figuras Es: " << view.sumarTodasLasAreas() << ".\n";
                }
                else{
                    cout << "Error.\n";
                }
                break;
            case 4: view.mostrarPerimetros();
                break;
            case 5:
                cout << "De que color quieres imprimir?\n";
                cout << "1 = azul\n2 = verde\n3 = Aguamarina\n4 = Rojo\n";
                cout << "5 = Purpura\n6 = Amarillo\n7 = Blanco\n8 = Gris\n";
                cout << "9 = Azul Claro\n";
                cin >> color;
                view.dibujarFiguras( color );
            default: break;
        }
    }while(opc != 0);
    cout << "Muchas Gracias Por Usar Nuestro Sistema, Vuelva Pronto!!!\n";
}

int main() {
    View view;
    menu(view);
    return 0;
}
