#include <iostream>
using namespace std;

class Movimiento{
	// Atributos
	private:
		string direccion;
		int x{0};
		int y{0};
		int bandera{0};
	// Metodos
	public:
		Movimiento(){		// Constructor

		}
		
		void paso(){
			int direccion{0};
			cout<<"Seleccione un movimiento:\n(1). Arriba\n(2). Abajo\n(3). Derecha\n(4). Izquierda\n(5). Salir"<<endl;
			cout<<"Seleccion: ";	cin>> direccion;
			switch(direccion){
				case 1: y++; break;
				case 2: y--; break;
				case 3: x++; break;
				case 4: x--; break;
				case 5: bandera++; break;
			}
		}
		
		void posicion(){
			cout<<"x: "<<x<<endl;
			cout<<"y: "<<y<<endl;
			cout<<endl;
		}
		int getbandera(){
			return bandera;
		}
};
