#include <iostream> 
#include "Base1.h"
#include "Base2.h"
using namespace std;
class Heredada : public Base1, private Base2{
	private:
		string nombre3;
	public:
		Heredada(string nombre1, string nombre2, string nombre3) : Base1(nombre1), Base2(nombre2){
			this -> nombre3 = nombre3;
		}	
		~Heredada(){
			cout<<"Se detruyo la clase Heredada"<<endl;
		}		
		string get_nombre3(){
			return nombre3;
		}
	
};
