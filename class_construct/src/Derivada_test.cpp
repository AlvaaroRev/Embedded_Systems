/*
 * derivada_test.cpp
 *
 *  Created on: 30 sept 2026
 *      Author: Álvaro
 */


#include "gtest/gtest.h"
#include "Derivada.h"

TEST(Derivada, constructor){
	Derivada D(6,33);
	Derivada e(4);
	Derivada f;

	int va,vb;
	D.get(va,vb);

	ASSERT_EQ(va,6);
	ASSERT_EQ(vb,33);
}
