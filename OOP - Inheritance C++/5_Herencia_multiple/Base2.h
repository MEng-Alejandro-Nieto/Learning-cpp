#include <iostream>
using namespace std;

class Base2{
	private:
		string nombre2;
	public:
		//Constructor
		Base2(string nombre2){
			this -> nombre2 = nombre2;
		}
		//Destructor
		~Base2(){
			cout<<"Se detruyo la clase Base2"<<endl;
		}
		//Metodo 1
		void mensajeBase2(){
			cout<<"patrocinado por Base2"<<endl;
		}
		//Metodo 2
		string get_nombre2(){
			return nombre2;
		}
};
