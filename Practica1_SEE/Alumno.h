/*
 * Alumno.h
 *
 *  Created on: 7 oct 2026
 *      Author: Álvaro
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <vector>
#include <iostream>
#include "Persona.h"

template <int curso>
class Alumno: public Persona {
public:
	std::vector<std::string> courseList; // lista asignaturas
	Alumno(std::string ID, std::string Nombre, std::string Apellidos); // Constructor
	bool matricula(std::string asignatura); //Matricula en asignatura
	void print(); //Escribe lista asignaturas
	virtual ~Alumno();
};

#endif /* ALUMNO_H_ */
