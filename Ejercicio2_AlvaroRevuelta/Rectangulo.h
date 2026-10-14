/*
 * Rectangulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_
#include "Sharpe.h"

class Rectangulo: public Sharpe{
	float lado;
	float alto;
public:
	Rectangulo(); //Constructor base (inicializa a 0)
	Rectangulo(float base, float altura); //Constructor
	virtual ~Rectangulo(); //Destructor

	float perimetro();
	float area();
};

#endif /* RECTANGULO_H_ */
