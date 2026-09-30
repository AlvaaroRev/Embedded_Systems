/*
 * Base.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Álvaro
 */

#include "Base.h"
#include <iostream>

Base::Base() {
	std::cout<<"Constructor Base::Base()"<<std::endl;
	a=0;
	b=0;
}

void Base::get(int &va, int &vb){
	va=a;
	vb=b;
}

Base::~Base() {
	std::cout<<"Destructor Base::Base()"<<std::endl;
}

Base::Base(const Base &other) {
	std::cout<<"Constructor Base::Base(const Base &other)"<<std::endl;
	a=other.a;
	b=other.b;
}

