#include <iostream>
using namespace std;

class ClaseBase{
	private:
		int numero;
		
	public:
		ClaseBase(int numero){
			this -> numero = numero;
			cout<<"Se creo la clase base"<<endl;
		}
		~ClaseBase(){
			cout<<"Se detruyo la clase base"<<endl;
		}
	
	
};
