/*
Defina una plantilla para la clase Arreglo, la cual podra definir valores de distinto tipo,
el cal se definira en el momento de la instacia, el programa debera tener un menu con las
siguientes opciones:

1. Agregar un nuevo elemento al arreglo
2. Comprobar el espacio en el arreglo
3. ver arreglo
4. vaciar el arreglo
5. salir
*/

#include <iostream>
#include "Menu.h"
#include "Arreglo.h"
using namespace std;

int main(int argc, char** argv) {
	int opcion{0};

	int n;
	int verificador{0};
	cout<<"Ingrese el numero de elementos: "; cin>>n;
	Arreglo <int> array(n);  
	do{
		Menu();
		pregunta(opcion);
		switch(opcion){
			case 1: array.insert_value(); break;
			case 2: array.comprobar_espacio(); break;
			case 3: array.get_values(); break;
			case 4: array.vaciar_arreglo(); break;
			case 5: verificador=1; break;
		}
	}while(verificador==0);

	return 0;
}
