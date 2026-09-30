/*
 * Base.h
 *
 *  Created on: 30 sept 2026
 *      Author: Álvaro
 */

#ifndef BASE_H_
#define BASE_H_

#include <iostream>

class Base {

protected:
	int a,b;

public:
	void get(int &va, int &vb);
	Base();
	~Base();
	Base(int va){ //Inline, reemplazo inline, sustituir la llamada por el codigo
		a=va;
		b=0;
		std::cout<<"Constructor Base::Base(int va)"<<std::endl;
	}
	Base(const Base &other);
};

#endif /* BASE_H_ */
