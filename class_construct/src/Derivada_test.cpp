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

TEST(Derivada, poly){
	Base d1(3);

	ASSERT_EQ(d1.suma(),3);

	Derivada d2(3,4);
	ASSERT_EQ(d2.suma(),107);

	Base *p;
	p = &d2; //Anulación de metodo, no coge los de derivada, sino los metodos de base
			 //Si el método suma no tiene virtual coge el de base en vez del derivada (d2 que apunta)
	ASSERT_EQ(p->suma(),107);

	ASSERT_EQ(p->global(),9);
	ASSERT_EQ(d1.global(),10);
	ASSERT_EQ(d2.global(),11);

}
