/*
 * Persona.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: Álvaro
 */

#include "Persona.h"

// Declaracion de miembros estaticos y, opcionalmente, su inicializacion
std::vector<Persona *> Persona::personList; // Lista de personas

// Metodo que comprueba si un elemento está en la lista
bool Persona::isOnList(std::string identificador) {
for( std::vector<Persona *>::iterator it=personList.begin();it < personList.end();it++) {
	if((*it)->ID==identificador) {
		return true; // Encontrado!
	}
 }
return false; // No encontrado
}

// Función print(), que recorre la lista de perosna e imprime su información.
void Persona::print() {
	std::cout << "Lista de Personas en la lista" << std::endl;
	for( std::vector<Persona *>::iterator it=personList.begin();it < personList.end();it++) {
		std::cout << "  Personal Data: " <<(*it)->ID<< ": " << (*it)->apellidos<< ", " << (*it)->nombre <<std::endl;
	 }
}

// Constructor con identificadores
Persona::Persona(std::string ID,std::string Nombre,std::string Apellidos) : nombre(Nombre),apellidos(Apellidos),ID(ID) {
	if(isOnList(ID)==false) {
	 personList.emplace_back(this); // inserta elemento en la lista
	 }
}

// Constructor dummy
Persona::Persona() {}

// Destructor
Persona::~Persona() {
	int remove= -1; // Elemento a eliminar

	for(int i=0; i < nPersonas(); i++) {
	 if(personList[i]==this) {
		 remove=i;
	 }
	}

	if(remove != -1) {
	 personList.erase(personList.begin()+remove);
	 }
}

// Sobre escribe el operador stream para escribir el nombre de la persona
 std::ostream& operator<<(std::ostream& os,Persona& person) {
	 os << " Personal Data: " << person.printPersona();
	 return os;
 }


