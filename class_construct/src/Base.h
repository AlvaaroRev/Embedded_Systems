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
	virtual int suma(); //Al añadir el virtual el metodo se vuelve medio puntero, en vez de hardcode.
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
