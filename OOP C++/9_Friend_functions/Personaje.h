#include <iostream>
using namespace std;

class Personaje{
	friend void modificar(Personaje &, int, int);
	
	private:
		int ataque, defensa;
		
	public:
		Personaje(int ataque, int defensa){
			this->ataque=ataque;
			this->defensa=defensa;
		}
		void mostrar_datos(){
			cout<<"El ataque: "<<ataque<<endl;
			cout<<"La defensa es: "<<defensa<<endl;
		}
	
};
