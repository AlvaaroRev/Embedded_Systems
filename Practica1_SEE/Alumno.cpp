/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Álvaro
 */

#include "Alumno.h"

template <int curso>
Alumno<curso>::~Alumno() {
	// TODO Auto-generated destructor stub
}

template <int curso>
	Alumno<curso>::Alumno(std::string ID, std::string Nombre, std::string Apellidos) :
	Persona::Persona(ID, Nombre, Apellidos)
{
}


// Método que comprueba si una asignatura está en la lista y sino la inserta
template <int curso>
bool Alumno<curso>::matricula(std::string asignatura) {

	// Recorremos el vector de asignaturas
	for (int i = 0; i < courseList.size(); ++i) {
		if (courseList[i] == asignatura) { //
			return false;
		}
	}

	//No está, la incluye entonces
	courseList.push_back(asignatura);
	return true;

}

template <int curso>
void Alumno<curso>::print(){
	std::cout<<"Lista de asiganturas en curso "<< curso << "-" << curso+1 <<std::endl;
	std::cout<<"  Alumno:"<< ID <<": "<< apellidos << ", "<< nombre <<std::endl;

	int i=0;
	for (; i < courseList.size(); ++i) {
		std::cout<<"   Asignatura: " << courseList[i] <<std::endl;
	}

	if(i==0)
		std::cout<<"   Sin asignaturas"<<std::endl;

}

template class Alumno<24>;
