#include <iostream>
using namespace std;

class Estatico{
	//Atributos
	private:
		static int contador; //Declaracion de un atributo estatico
		string name;
	//Metodos
	public:
		Estatico(){
			contador++;
		}
		int getcontador(){
			return contador;
		}
		static int sumar(int a, int b){
			int suma=a+b;
			return suma;
		}
		
};
