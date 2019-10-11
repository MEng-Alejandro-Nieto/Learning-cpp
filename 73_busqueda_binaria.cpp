#include <iostream>


using std:: cin; using std:: cout; using std:: endl;

int main(){
	int array[]={2,4,6,8,10,12,14,16,18,20,21,22,23,24,25,26};
	int length, central, bandera='F', dato;
	length=sizeof(array)/sizeof(array[0]);
	int i=0, j=length-1;
	cout<<"Ingrese sel valor a buscar: "; cin>>dato;
	while(i<j){

		central=(i+j)/2;
		if(array[central]==dato){
			bandera='V';
			break;
		}
		else if(array[central]>dato){
			j=central;
		}
		else if(array[length-1]==dato){
			bandera='V';
			central=length-1;
			break;
		}
		else if(array[central]<dato){
			if(i==length-2){
				break;
			}
			else{
				i=central;
			}
		}
		
	}
	if(bandera=='V'){
		cout<<"El numero se encontro en la posicion: "<<central;
	}
	else{
		cout<<"El numero no se encuentra";
	}
	return 0;

}