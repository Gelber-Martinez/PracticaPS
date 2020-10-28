#include <iostream>
#include "metodos.cpp"
#include "cabecera.h"

int main(){
	Persona persona1;
	persona1.adquirirNombre();
	persona1.contar();
	persona1.dormir();
	persona1.decirNombre();
	persona1.hablar();
	return 0;
}
