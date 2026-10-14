/*
 * Circulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: Álvaro
 */

#include "Circulo.h"
#include <iostream>
#include <gtest/gtest.h>

TEST(Circulo,test3){
	double rad = 1.0;
	Circulo circ(rad);

	ASSERT_EQ(circ.area(),M_PI);
	ASSERT_EQ(circ.perimetro(),2*M_PI);

}

