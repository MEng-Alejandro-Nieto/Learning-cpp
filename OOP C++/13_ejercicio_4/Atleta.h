#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Atleta{
	friend void ajustar_tiempos(Atleta*);
	// Atributos
	private:
		int numero{0};
		int th{0}, tm{0}, ts{0};
		string nombre;
	
	// Metodos
	public:
		Atleta(int numero,int th, int tm, int ts,string nombre){	// Constructor
			this-> numero = numero;
			this-> th = th;
			this-> tm = tm;
			this-> ts = ts;
			this-> nombre = nombre;
		}
		Atleta(){}
		
		int get_numero(){return numero;}
		int get_th(){return th;}
		int get_tm(){return tm;}
		int get_ts(){return ts;}	
		string get_nombre(){return nombre;}		
					
};
