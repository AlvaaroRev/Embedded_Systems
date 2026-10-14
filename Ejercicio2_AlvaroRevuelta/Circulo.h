/*
 * Circulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_

#include <cmath>

template <typename T>
class Circulo {
	protected:
	T radio;

	public:
		Circulo(T r);
		Circulo();
		virtual ~Circulo();

		T area();
		T perimetro();
};

#endif /* CIRCULO_H_ */
