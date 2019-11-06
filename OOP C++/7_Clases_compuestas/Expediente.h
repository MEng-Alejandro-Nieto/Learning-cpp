#include <iostream>
using namespace std;

class Expediente{
	//Atributos
	private:
		int nroexpediente;
		
	//Metodos	
	public:	
	//Constructor
	Expediente(int nroexpediente){
		this->nroexpediente=nroexpediente;
	}
	//Constructor por default
	Expediente(){
	}
	//Destructor
	~Expediente(){
	}	
	int getexpediente(){
		return nroexpediente;
	}
	
};











