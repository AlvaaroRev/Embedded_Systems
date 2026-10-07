/*
 * Persona_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Álvaro
 */

#include "Persona.h"
#include <iostream>
#include <gtest/gtest.h>

// Test constructor
TEST(Persona, constructor) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;

	//Solo debería haber en la lista P1
	ASSERT_EQ(p2.nPersonas(),1);

	//Comprobamos el ID
	ASSERT_TRUE(p2.isOnList("123456789A"));

	//Comprobamos que este ID no está
	ASSERT_FALSE(p2.isOnList("000000000B"));


}

// Test destructor
TEST(Persona, destructor) {
	// Creo una persona
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;

	 {
		 Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");

		 // Solo tiene que haber 2 personas en la lista
		 ASSERT_EQ(p2.nPersonas(),2);

		 // Comprobar que su id es correcto
		 ASSERT_TRUE(p2.isOnList("000000000B"));
	 }

	// Solo tiene que haber 1 personas en la lista
	 ASSERT_EQ(p2.nPersonas(),1);

	// Comprobar que su id es correcto
	 ASSERT_FALSE(p2.isOnList("000000000B"));
}


TEST(Persona, print) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");

	//Resultados de las funciones print
	std::cout<<"PROBANDO FUNCION printPersona()"<<std::endl;
	p3.printPersona();

	std::cout<<"PROBANDO FUNCION PRINT()"<<std::endl;
	p3.print();


}
