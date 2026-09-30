/*
 * Derivada.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Álvaro
 */

#include "Derivada.h"
#include <iostream>


Derivada::Derivada(int a, int b) {
	Base::a = a;
	Base::b = b;
	std::cout<<"Constructor Derivada::Derivada(int a, int b)"<<std::endl;

}

Derivada::~Derivada() {
	std::cout<<"Destructor Derivada::Derivada()"<<std::endl;
}

