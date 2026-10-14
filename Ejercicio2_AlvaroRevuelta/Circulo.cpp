/*
 * Circulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#include "Circulo.h"

template <typename T>
Circulo<T>::Circulo(T r) { //Cosntructor que inicializa el radio.
	radio = r;
}

template <typename T>
Circulo<T>::Circulo() { //Constructor por defecto (inicializa el radio a 0);
	radio = 0;
}

template <typename T>
Circulo<T>::~Circulo() {
	// TODO Auto-generated destructor stub
}

template <typename T>
T Circulo<T>::area(){
	return M_PI*radio*radio;
}

template <typename T>
T Circulo<T>::perimetro(){
	return 2*M_PI*radio;
}

template class Circulo<int>;
template class Circulo<float>;
template class Circulo<double>;
