all: compilar
compilar: Figura Circulo Cuadrado Rectangulo main
	g++ -o Salida  Figura.o Circulo.o Cuadrado.o Rectangulo.o Main.o
Figura: Figura.cpp Figura.h
	g++ -c Figura.cpp
Circulo: Circulo.cpp Circulo.h Figura.h
	g++ -c Circulo.cpp
Cuadrado: Cuadrado.cpp Cuadrado.h Figura.h
	g++ -c Cuadrado.cpp
Rectangulo: Rectangulo.cpp Rectangulo.h Figura.h
	g++ -c Rectangulo.cpp
main: Main.cpp Rectangulo.h Cuadrado.h Circulo.h Figura.h
	g++ -c main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o