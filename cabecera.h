#ifndef Persona_h
#define Persona_h

class Persona{
public:	// Variables y funciones de la clase de �mbito p�blico
	Persona();				// Constructor por defecto
	Persona(char);
	
	void dormir();	// Funci�n 
	void hablar();	// Funci�n 
	void contar();			
	void adquirirNombre();
	void decirNombre();// 
	
private: // Variables y funciones de la clase de �mbito privado
	char nombre[100];
};

#endif
