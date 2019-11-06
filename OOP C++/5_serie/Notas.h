#include <iostream>
using namespace std;

class Notas{
	//Atributos
	private:
		float matematicas, calculo;
	//Metodos
	public:
		Notas(float _matematicas,float _calculo){
			matematicas=_matematicas;
			calculo=_calculo;
		}
		Notas(){
			
		}
		void pedir();
		void mostrar();
};
