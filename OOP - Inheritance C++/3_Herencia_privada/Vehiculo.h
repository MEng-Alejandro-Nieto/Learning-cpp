#ifndef VEHICULO
#define VEHICULO
#include <iostream>
using namespace std;

class Vehiculo{
	private:
		string marca;
		
		string get_marca(){
			return marca; 
		}
	protected:
		string modelo;
		
		string get_modelo(){
			return modelo; 
		}
	public:
		int anio;
		
		Vehiculo (string marca, string modelo, int anio){
			this -> marca = marca;
			this -> modelo = modelo;
			this -> anio = anio;
		}
		
		int get_anio_publica(){return anio;}
		string get_modelo_publica(){return modelo;}
		string get_marca_publica(){return marca;}
		string retornar_marca(){
			return get_marca();
		}
};
#endif
