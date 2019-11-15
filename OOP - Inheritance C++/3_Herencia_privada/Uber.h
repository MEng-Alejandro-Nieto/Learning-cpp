#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Uber : private Vehiculo{
	
	private:
		string empresa;
	protected:
		int n_puertas;
	public:
		Uber(string marca, string modelo, int anio, string empresa, int n_puertas): Vehiculo(marca, modelo, anio){
			this -> empresa = empresa;
			this -> n_puertas = n_puertas;
		}
		
		int get_n_puertas(){
			return n_puertas;
		}
		string get_empresa_publica(){
			return empresa;
		}	
		int retornar_anio(){
			return get_anio_publica();
		}
		
		
};
