#include <iostream>
#include <string>
using namespace std;

class Vehiculo{
	// Atributos
	private:
	string marca, modelo; 
	float precio;	
	
	//Metodos
	public:
		Vehiculo(string marca, string modelo, float precio){ // Constructor
			this-> marca = marca;
			this-> modelo = modelo;
			this-> precio = precio;
		}
		
		Vehiculo(){	//Constructor
		}
		
		float get_precio(){
			return precio;
		}
		string get_marca(){
			return marca;
		}
		string get_modelo(){
			return modelo;
		}
		
		void mostrar_datos(){
			cout<<"Marca: "<<marca<<endl;
			cout<<"Modelo: "<<marca<<endl;
			cout<<"Precio: "<<marca<<endl;
		}
		
};
