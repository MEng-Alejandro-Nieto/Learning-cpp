#include <iostream>
#include "ClaseBase.h"
using namespace std;

class ClaseDerivada: public ClaseBase{
	private:
		int numero2;
		
	public:
		ClaseDerivada(int numero, int numero2):ClaseBase(numero){
			this-> numero2 = numero2;
			cout<<"Se creo la clase derivada"<<endl;
		}
		~ClaseDerivada(){
			cout<<"Se destruyo la clase derivada"<<endl;
	}
};
