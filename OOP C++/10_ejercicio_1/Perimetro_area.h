#include <iostream>
using namespace std;


class Perimetro_area{
	//Atributos
	private:
		float lado1, lado2;
		
	//Metodos	
	public:	
		Perimetro_area(float lado1, float lado2){ 	// Constuctor 1
			this->lado1 = lado1;
			this->lado2 = lado2;
		}
		Perimetro_area(float lado1){				// Constructor 2
			this->lado1 = lado1;
			this->lado2 = lado1;
		}
		
		void obtenerarea(){
			float area = lado1*lado2;
			cout<<"El area es: "<<area<<endl;
		}
		
		void obtenerperimetro(){
			float perimetro=2*(lado1+lado2);
			cout<<"El perimetro es: "<<perimetro<<endl;
		}
	
	
};
