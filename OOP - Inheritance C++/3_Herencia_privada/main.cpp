#include <iostream>
#include "Vehiculo.h"
#include "Servicio_publico.h"
#include "Uber.h"
using namespace std;
int main(int argc, char** argv) {
	
	Vehiculo* mazda = new Vehiculo("Mazda","CX5",2020);
						// ACCEDIENDO A LOS ATRIBUTOS DIRECTAMENTE
	// cout<<mazda->marca<<endl;	// PRIVADO: 	ERROR porque es privado
	// cout<<mazda->modelo<<endl;	// PROTECTED: 	ERROR porque es protegido
	cout<<mazda->anio<<endl;		// PUBLICO: 	correra	
	
						// ACCEDIENDO A LOS ATRIBUTOS POR METODOS
	//cout<<mazda->get_marca()<<endl;		// PRIVADO: 	ERROR porque es privado
	//cout<<mazda->get_modelo()<<endl;		// PROTECTED: 	ERROR porque es protegido
	cout<<mazda->get_anio_publica()<<endl; 	// PUBLICO: 	correra porque es un metodo publico
	cout<<mazda->get_marca_publica()<<endl;	// PUBLICO: 	correra porque es un metodo publico
	cout<<mazda->get_modelo_publica()<<endl;// PUBLICO: 	correra porque es un metodo publico
	cout<<mazda->retornar_marca()<<endl	;	//PUBLICO: 	correra porque es un metodo publico de la clase Vehiculo que llama dentro de la clase un metodo privado
	//--------------------------------------------------------------------------------------------------------------
	cout<<endl;
	cout<<"Objeto con herencia publica"<<endl;
	cout<<endl;
	Servicio_publico* bus = new Servicio_publico("BYD","cebollero",1990,"Bolivariano",3);
							// ACCEDIENDO A LOS ATRIBUTOS DIRECTAMENTE
	// cout<<mazda->marca<<endl;	// PRIVADO: 	ERROR porque es privado
	// cout<<mazda->modelo<<endl;	// PROTECTED: 	ERROR porque es protegido
	cout<<bus->anio<<endl;			// PUBLICO: 	correra	
	
						// ACCEDIENDO A LOS ATRIBUTOS POR METODOS
	//cout<<mazda->get_marca()<<endl;		// PRIVADO: 	ERROR porque es privado
	//cout<<mazda->get_modelo()<<endl;		// PROTECTED: 	ERROR porque es protegido
	cout<<bus->get_anio_publica()<<endl;	// HEREDADO PUBLICO: correra
	cout<<bus->get_marca_publica()<<endl;	// HEREDADO PUBLICO: correra
	cout<<bus->get_modelo_publica()<<endl;	// HEREDADO PUBLICO: correra
	cout<<bus->get_empresa_publica()<<endl;	// HEREDADO PUBLICO: correra	
	//--------------------------------------------------------------------------------------------------------------
	cout<<endl;
	cout<<"Objeto con herencia privada"<<endl;
	cout<<endl;
	Uber* Lexus = new Uber("Lexus","AMG",2019,"Privada",4);
							// ACCEDIENDO A LOS ATRIBUTOS DIRECTAMENTE
	// cout<<lexus->marca<<endl;	// PRIVADO: 	ERROR porque es privado
	// cout<<lexus->modelo<<endl;	// PROTECTED: 	ERROR porque es protegido
	//cout<<Lexus->anio<<endl;			// PUBLICO: 	ERROR ya que fue heredado de tipo privado
	
						// ACCEDIENDO A LOS ATRIBUTOS POR METODOS
	//cout<<Lexus->get_marca()<<endl;		// PRIVADO: 	ERROR porque es heredado de tipo privado y en la clase base tambien es de tipo privado
	//cout<<Lexus->get_modelo()<<endl;		// PRIVADO: 	ERROR porque es heredado de tipo privado y en la clse base es de tipo protegido
	cout<<Lexus->get_n_puertas()<<endl;		// PUBLICO: 	correra porque es de tipo publico
	//cout<<Lexus->get_anio_publica()<<endl;	// HEREDADO PUBLICO: ERROR  porque es heredado de tipo privado y en la clase base es de tipo publico
	//cout<<Lexus->get_marca_publica()<<endl;	// HEREDADO PUBLICO: ERROR  porque es heredado de tipo privado y en la clase base es de tipo publico 
	//cout<<Lexus->get_modelo_publica()<<endl;	// HEREDADO PUBLICO: ERROR  porque es heredado de tipo privado y en la clase base es de tipo publico 
	cout<<Lexus->get_empresa_publica()<<endl;	// PRIVADO: correra porque es un funcion publica de la clase Uber
	cout<<Lexus->get_n_puertas()<<endl;			// PRIVADO: correra porque es un funcion publica de la clase Uber
	cout<<Lexus->retornar_anio()<<endl;			// PUBLICO: correra porque es una funcion publica de la clase Uber que llama dentro de la clase un metodo privado 
	return 0;
}
