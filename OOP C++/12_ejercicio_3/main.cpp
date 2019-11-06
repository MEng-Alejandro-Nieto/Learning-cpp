/*
Construir un programa que dada una serie de vehiculos caracterizados por su marca,
modelo y precio, imprima las propiedades del vehiculo mas barato. Para ello se deberan
leer por teclado las caracteristicas de cada vehiculo y crear una clase que represente
a cada uno de ellos
*/

#include <iostream>
#include <stdlib.h>
#include "Vehiculo.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregando_objetos(Vehiculo*,int );
void cheapest(Vehiculo*,int);
////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
	Vehiculo* carros;
	int numero_vehiculos;
	
	cout<<"Numero de vehiculos: "; cin>>numero_vehiculos;
	carros= new Vehiculo[numero_vehiculos];
	agregando_objetos(carros,numero_vehiculos);
	cheapest(carros,numero_vehiculos);

	return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void agregando_objetos(Vehiculo* carros, int n){
	string marca, modelo;
	float precio{0};
	for(int i=0;i<n;i++){
		cin.ignore();
		cout<<i+1<<" Marca: "; getline(cin,marca); 
		cout<<i+1<<" Modelo: "; getline(cin,modelo);
		cout<<i+1<<" precio: "; cin>>precio;
		carros[i]= Vehiculo(marca, modelo, precio);
		cout<<endl;
	}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
void cheapest(Vehiculo* carros, int n){
	float minimo=carros[0].get_precio();
	int j{0};
	for (int i{1};i<n;i++){
		if(carros[i].get_precio()<carros[i-1].get_precio()){
			minimo=carros[i].get_precio();
			j=i;	
		}
	}
	cout<<"El carro mas economico es: "<<endl;
	cout<<"Marca: "<<carros[j].get_marca()<<endl;
	cout<<"Modelo: "<<carros[j].get_modelo()<<endl;
	cout<<"Precio: "<<carros[j].get_precio()<<endl;
}




