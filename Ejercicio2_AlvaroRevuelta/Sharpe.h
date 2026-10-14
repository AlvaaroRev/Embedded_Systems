/*
 * Sharpe.h
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#ifndef SHARPE_H_
#define SHARPE_H_

class Sharpe {
public:
	Sharpe(); //Constructor
	virtual ~Sharpe(); //Destructor

	virtual float area(); //Calcula el area
	virtual float perimetro(); //Calcula el perimetro

};

#endif /* SHARPE_H_ */
