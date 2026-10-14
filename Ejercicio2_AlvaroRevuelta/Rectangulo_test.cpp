/*
 * Rectangulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#include "Rectangulo.h"
#include <iostream>
#include <gtest/gtest.h>


TEST(Rectangulo, test1) {
	Rectangulo rec1(1,2);

	ASSERT_EQ(rec1.area(),2);
	ASSERT_EQ(rec1.perimetro(),6);
}

TEST(Rectangulo, test2) {
	Rectangulo rect(2,1);
	Sharpe *psharpe;

	psharpe = &rect;

	//Comprueba el area y perimetro de rect a través del puntero
	//Si devuelve 0, emplea el metodo de Sharpe
	ASSERT_EQ(psharpe->area(),2);
	ASSERT_EQ(psharpe->perimetro(),6);
}
