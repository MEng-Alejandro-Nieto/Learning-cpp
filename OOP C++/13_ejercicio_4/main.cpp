/*
Construir un programa para una competencia de atletismo, el programa debe gestionar
una serie de atletas caracterizados por su numero de atleta, nombre y tiempo de
carrera, al final el programa debe mostrar los datos del atleta ganador de la carrera
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Atleta.h"
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////
int n_atletas{0};
int n_etapas{0};
Atleta* atletas;
////////////////////////////////////////////////////////////////////////////////////////////////////////
void pregunta();
void ajustar_tiempos(Atleta*);
void ganador(Atleta*);
////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
	pregunta();	//----> se crea espacio de memoria para nuestro arreglo y se llena el arreglo con toda la informacion
	ajustar_tiempos(atletas);//----> Se arreglan las horas, minutos y segundos de cada objeto dentro del arreglo
	ganador(atletas);
	return 0;
}
/////////////////////////////////////////////////////////////////////////
void pregunta(){
	
	int numero{0}, horas{0}, minutos{0}, segundos{0},temporal{0};
	string nombre;
	
	cout<<"Numero de atletas: "; cin>>n_atletas;
	cout<<"Numero de etapas: "; cin>>n_etapas;
	atletas = new Atleta[n_atletas];
	for(int i=0;i<n_atletas;i++){
		cin.ignore();
		horas=0; minutos=0; segundos=0;
		cout<<"...............:"<<i+1<<" Atleta"<<":..............."<<endl;
		cout<<"Numero del atleta: "; cin>>numero; fflush(stdin);
		cout<<"Nombre del atleta: "; getline(cin,nombre);
		
		for(int j=0;j<n_etapas;j++){
			cout<<"ETAPA #"<<j+1<<endl;
			cout<<"Numero de Horas: "; cin>>temporal; horas+=temporal;
			cout<<"Numero de minutos: "; cin>>temporal; minutos+=temporal;
			cout<<"Numero de segundos: "; cin>>temporal; segundos+=temporal;
			cout<<endl;
		}
		cout<<endl;
		atletas[i]=Atleta(numero,horas, minutos, segundos,nombre);			
	}
}
void ajustar_tiempos(Atleta* atletas){
	for(int i=0;i<n_atletas;i++){
		atletas[i].th = atletas[i].th + atletas[i].ts/3600;	atletas[i].ts = atletas[i].ts%3600;
		atletas[i].tm = atletas[i].tm + atletas[i].ts/60;	atletas[i].ts = atletas[i].ts%60;
		atletas[i].th = atletas[i].th + atletas[i].tm/60;	atletas[i].tm = atletas[i].tm%60;
	}
}
void ganador(Atleta* atletas){
	int minimoh=atletas[0].get_th();
	int minimom=atletas[0].get_tm();
	int minimos=atletas[0].get_ts();
	int j{0};
	for(int i{0};i<n_atletas;i++){
		if(atletas[i].get_th()<=minimoh){
			if(atletas[i].get_th()<minimoh){
				minimoh=atletas[i].get_th();
				minimom=atletas[i].get_tm();
				minimos=atletas[i].get_ts();
				j=i;	
			}
			else{
				if(atletas[i].get_tm()<=minimom){
					if(atletas[i].get_tm()<minimom){
						minimoh=atletas[i].get_th();
						minimom=atletas[i].get_tm();
						minimos=atletas[i].get_ts();
						j=i;
					}
					else{
						if(atletas[i].get_ts()<=minimos){
							if(atletas[i].get_ts()<minimos){
								minimoh=atletas[i].get_th();
								minimom=atletas[i].get_tm();
								minimos=atletas[i].get_ts();
								j=i;	
							}
						}
					}	
				}
			}
		}
	}
	cout<<"..........:EL GANADOR ES:.........."<<endl;
	cout<<"Nombre: "<<atletas[j].get_nombre()<<endl;
	cout<<"Numero: "<<atletas[j].get_numero()<<endl;
	cout<<"tiempo: "<<atletas[j].get_th()<<":"<<atletas[j].get_tm()<<":"<<atletas[j].get_ts()<<endl;
		
}
/////////////////////////////////////////////////////////////////////////






