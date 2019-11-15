#include <iostream>
#include "Base1.h"
#include "Base2.h"
using namespace std;

class Derivada : public Base1, public Base2{
	protected:
		int x;
	public:
		Derivada(int x1, int x2, int x): Base1(x1),Base2(x2){
			this -> x = x;
		}
		~Derivada(){
			cout<<"Se destruyo la clase Derivada"<<endl;
		}
		
		int get_x(){
			return x;
		}
		//--------------------------------------------------
		int get_x1(){				// Ambiguedad con atributos de classes heredadas
			return Base1::x;
		}
		int get_x11(){				// Ambiguedad con metodos de clases heredadas
			return Base1::get_x();
		}
		//---------------------------------------------------
		
		int get_x2(){				// Ambiguedad con atributos de classes heredadas
			return Base2::x;
		}
		int get_x22(){
			return Base2::get_x();	// Ambiguedad con metodos de classes heredadas
		}
	
};
