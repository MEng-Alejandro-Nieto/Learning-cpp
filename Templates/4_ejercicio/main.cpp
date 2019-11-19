/*
Defina una plantilla para la clase Materia, de tal manera que el tipo de dato del atributo
Calificacion sea de tipo T. esto permitira crear objetos de tipo materia que tengan
calificaciones que sean: numeros enteros, numeros decimales y letras
a) Cree un objeto de tipo materia usanto el tipo int. Imprima los valores de los atributos
   del objeto creado
b) Cree un objeto de tipo Materia usando el tipo float
c) cree un objeto de tipo Materia usando el tipo char
d) Incluya un metodo en la clase que permita modificar la calificacion de una materia
*/

#include <iostream>
#include "Materia.h"
using namespace std;

int main(int argc, char** argv) {
	
	Materia <int> curso1("Matematicas",4);
	Materia <float> curso2("Ciencias",4.8);
	Materia <char> curso3("Software",'A');
	Materia <string> curso4("Filosofia","A-");
	
	curso1.get_calificacion();
	curso1.set_calificacion(3);
	curso1.get_calificacion();
		
	curso2.get_calificacion();
	curso2.set_calificacion(3.8);
	curso2.get_calificacion();
		
	curso3.get_calificacion();
	curso3.set_calificacion('B');
	curso3.get_calificacion();		
		
	curso4.get_calificacion();
	curso4.set_calificacion("A+");
	curso4.get_calificacion();	
		
	return 0;
}
