/*
Construir un programa que permita dirigir el movimiento de un objeto dentro de un tablero
y actualice su posicion dentro del mismo. Los movimientos posibles son ARRIBA, ABAJO
DERECHA, IZQUIERDA. tras cada movimiento el programa  mostrara la nueva direccion elegida
y las coordenadas de situacion del objeto dentro del tablero
*/

#include <iostream>
#include <string.h>
#include "Movimiento.h"
using namespace std;

int main(int argc, char** argv) {
	Movimiento* objeto = new Movimiento();
	 
	do{
		objeto->paso();
		objeto->posicion();
	}while(objeto->getbandera()==0);
	
	return 0;
}
