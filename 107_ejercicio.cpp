#include <iostream>
using std::cin; using std::cout; using std::endl;
///////////////////////////////////////////////////////////
struct fecha{
	int ano,mes,dia;	
}fecha1,fecha2;
///////////////////////////////////////////////////////////
void pregunta();
fecha comparar(fecha,fecha);
///////////////////////////////////////////////////////////
int main(){
	pregunta();
	cout<<"la fecha mas actual es "<<comparar(fecha1,fecha2).ano<<"/"<<comparar(fecha1,fecha2).mes<<"/"<<comparar(fecha1,fecha2).dia;
	return 0;
}
///////////////////////////////////////////////////////////
void pregunta(){
	cout<<"PRIMERA FECHA"<<endl;
	cout<<"ano: "; cin>>fecha1.ano;
	cout<<"mes: "; cin>>fecha1.mes;
	cout<<"dia: "; cin>>fecha1.dia;

	cout<<"SEGUNDA FECHA"<<endl;
	cout<<"ano: "; cin>>fecha2.ano;
	cout<<"mes: "; cin>>fecha2.mes;
	cout<<"dia: "; cin>>fecha2.dia;

}
fecha comparar(fecha fecha1,fecha fecha2){
	if(fecha1.ano>fecha2.ano){
		return fecha1;
	}
	else if(fecha1.ano<fecha2.ano){
		return fecha2;
	}
	else if(fecha1.ano==fecha2.ano){
		if(fecha1.mes>fecha2.mes){
			return fecha1;
		}
		else if(fecha1.mes<fecha2.mes){
			return fecha2;
		}
		else if(fecha1.mes==fecha2.mes){
			if(fecha1.dia>fecha2.dia){
				return fecha1;
			}
			else if(fecha1.dia<fecha2.dia){
				return fecha2;
		}
			else if(fecha1.dia==fecha2.dia){
				
			}
		}
	}
}
///////////////////////////////////////////////////////////

