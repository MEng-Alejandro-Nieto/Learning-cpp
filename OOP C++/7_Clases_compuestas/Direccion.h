#include <iostream>
using namespace std;

class Direccion{
	//Atributos
	private:
		string direccion;
	//Metodos
	public:
		//Constructor
		Direccion(string direccion){
			this->direccion=direccion;
		}
		//Constructor por defecto
		Direccion(){
		}
		//Destructor
		~Direccion(){
		}
		string getdireccion(){
			return direccion;
		}
		
		
};
