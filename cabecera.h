#ifndef Persona_h
#define Persona_h

class Persona{
public:	// Variables y funciones de la clase de ámbito público
	Persona();				// Constructor por defecto
	Persona(char);
	
	void dormir();	// Función 
	void hablar();	// Función 
	void contar();			
	void adquirirNombre();
	void decirNombre();// 
	
private: // Variables y funciones de la clase de ámbito privado
	char nombre[100];
};

#endif
