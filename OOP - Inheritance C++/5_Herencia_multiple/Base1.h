#include <iostream>
using namespace std;

class Base1{
	private:
		string nombre1;
	public:
		//Constructor
		Base1(string nombre1){
			this -> nombre1 = nombre1;
		}
		//Destructor
		~Base1(){
			cout<<"Se detruyo la clase Base1"<<endl;
		}
		//Metodo 1
		void mensajeBase1(){
			cout<<"patrocinado por Base1"<<endl;
		}
		//Metodo 2
		string get_nombre1(){
			return nombre1;
		}
		
};
