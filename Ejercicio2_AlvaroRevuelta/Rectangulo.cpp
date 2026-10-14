/*
 * Rectangulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#include "Rectangulo.h"

Rectangulo::Rectangulo() { //Constructor inicializador a 0.
	lado = 0;
	alto = 0;

}

Rectangulo::Rectangulo(float base, float altura) { //Constructor para valores dados
	lado = base;
	alto = altura;
}

Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
}

float Rectangulo::perimetro(){
	return 2*(lado+alto);
}

float Rectangulo::area(){
	return lado*alto;
}
