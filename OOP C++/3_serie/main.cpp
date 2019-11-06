#include <iostream>
#include "Dia_ano.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int dia{0}, mes{0};
	cout<<"Ingrese el numero de dia de tu cumpleanos: "; cin>>dia;
	cout<<"Ingrese el numero de mes de tu cumpleanos: "; cin>>mes;
	Dia_ano *cumpleanos = new Dia_ano(dia,mes);
	cout<<"Ingrese el numero del dia de hoy: "; cin>>dia;
	cout<<"Ingrese el numero del mes actual: "; cin>>mes;		
	Dia_ano *hoy = new Dia_ano(dia,mes);

	
	
	
	hoy->mostrar();
	if(hoy->igual(*cumpleanos)){
		cout<<"Feliz cumpleanos."<<endl;
	}
	else{
		cout<<"Hoy no es tu cumpleanos."<<endl;		
	}
	
	return 0;
}
