/*
 * Alumno_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Álvaro
 */

#include "Alumno.h"
#include <iostream>
#include <gtest/gtest.h>

TEST(Alumno, test){
	Alumno<24> a1("123456789A","Nombre 1", "Apellidos 1");
	Alumno<24> a2("123456789B","Nombre 2", "Apellidos 2");
	Alumno<24> a3("123456789C","Nombre 3", "Apellidos 3");

	Persona personList;

	std::cout<<"PROBANDO NUMERO DE PERSONAS"<<std::endl;
	ASSERT_EQ(personList.nPersonas(),3);

	std::cout<<"PROBANDO QUE SE ENCUENTRA A A2"<<std::endl;
	ASSERT_TRUE(personList.isOnList("123456789B"));




	std::cout<<"PROBANDO FUNCION FUNCION matricula()"<<std::endl;
	a1.matricula("ASE");
	a1.matricula("Embebidos");
	a1.matricula("SEM");
	a1.matricula("AS");

	//Comprobar numero de asignaturas matriculadas.
	ASSERT_EQ(a1.courseList.size(),4);

	std::cout<<"PROBANDO FUNCION PRINT()"<<std::endl;
	a1.print();

	std::cout << " Cuestion a justificar en la memoria" << std::endl;
	Persona *dat;
	dat= &a1;
	dat->print();
}
