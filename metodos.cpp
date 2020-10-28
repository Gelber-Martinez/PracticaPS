#include <iostream>
#include "cabecera.h"

using namespace std;

Persona::Persona(){
}
Persona::Persona(char name){
}

void Persona::dormir(){
	cout<<"Estoy durmiendo"<<endl;
}
void Persona::hablar(){
	cout<<"Estoy hablando contigo"<<endl;
}
void Persona::contar(){
	cout<<"Estoy contando 1..2..3..."<<endl;
}
void Persona::adquirirNombre(){
	cout << "Por favor ingresa tu nombre: ";
	cin >> nombre;
}
void Persona::decirNombre(){
	cout<<"Mi nombre es "<<nombre<<endl;
}
