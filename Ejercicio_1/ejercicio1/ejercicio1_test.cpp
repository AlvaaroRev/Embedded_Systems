/*
 * ejercicio1_test.cpp
 *
 *  Created on: 17 sept 2026
 *      Author: Álvaro
 */


int suma(int d1, int d2);

#include <gtest/gtest.h>

TEST(suma, test1){
	int d1=20;
	int d2=40;
	int resul=50;

	ASSERT_EQ(resul, suma(d1,d2));
}

TEST(suma2, test2){
	int d1=10;
	int d2=-4;

	ASSERT_EQ(6, suma(d1,d2));
}
