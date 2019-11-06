#include <iostream>

class Dia_ano{
	//Atributos
	private:
		int dia, ano;
	//Metodos
	public:		
		Dia_ano(int _dia, int _ano){
			dia = _dia;
			ano = _ano;
		}
		Dia_ano(){
			dia = ano = 0; 
		}
	
		void mostrar();
		bool igual(Dia_ano &d );
		
			
};
