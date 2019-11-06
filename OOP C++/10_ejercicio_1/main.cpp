/*
Construir un programa que calcule el area y el perimetro de un cuadrilatero deada la
longitud de sus lados. Si es un cuadrado, solo se proporcionara la longitud de uno de 
sus lados al constructor
*/

#include <iostream>
#include "Perimetro_area.h"
using namespace std;


int main(int argc, char** argv) {
	Perimetro_area* cuadrilatero = new Perimetro_area(10);
	
	cuadrilatero->obtenerarea();
	cuadrilatero->obtenerperimetro();
	return 0;
}
