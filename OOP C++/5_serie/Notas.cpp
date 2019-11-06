#include <iostream>
#include "Notas.h"
using namespace std;

void Notas::pedir(){
	cout<<"Ingrese la nota de matematicas: "; cin>>matematicas;
	cout<<"Ingrese la nota de calculo: "; cin>>calculo;
}

void Notas::mostrar(){
	cout<<"La nota ingresada de matematicas es: "<<matematicas<<endl;
	cout<<"La nota ingresada de calculo es: "<<calculo<<endl;
	cout<<"El promedio del alumno es: "<<(matematicas+calculo)/2<<endl;
}
