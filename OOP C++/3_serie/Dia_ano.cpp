#include <iostream>
#include "Dia_ano.h"
using namespace std;
bool Dia_ano::igual(Dia_ano &d ){
		if(d.dia==dia && d.ano==ano){
			return true;
		}
		else{
			return false;
		}
	}
void Dia_ano::mostrar(){
		cout<<"La fecha de hoy es: "<<dia<<"/"<<ano<<"."<<endl;
	}
