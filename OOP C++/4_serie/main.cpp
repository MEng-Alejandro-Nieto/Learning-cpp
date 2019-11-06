// Implementacion de la clase persona

#include <iostream>
#include <string.h>
#include "Persona.h"
using namespace std;

int main(){
	Persona *persona1 = new Persona("Camila",25);
	Persona *persona2 = new Persona("Camila");
	Persona *persona3 = new Persona(26);
	
	persona1->mostrar();		
	persona2->mostrar();	
	persona3->mostrar();	
	return 0;
}
