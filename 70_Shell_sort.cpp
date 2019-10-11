#include <iostream>
#include <conio.h>

using std::cin; using std::cout; using std::endl;


int main(){
	
	int array[]={9,3,5,4,8,7,1,6,2,0}; int length{0},salto{0},i{0},aux{0},verificador;
	length=sizeof(array)/sizeof(array[0]);
	salto=length/2;
	while(salto>0){
		verificador=1;
		while(verificador==1){
			verificador=0;
			for(i=salto;i<length;i++){
				if (array[i]<array[i-salto]){
					aux=array[i];
					array[i]=array[i-salto];
					array[i-salto]=aux;
					verificador=1;
				}
			}			
		}
		salto=salto/2;
	}
	for(int k{0};k<length;k++){
		cout<<array[k]<<endl;
	}
	getch();
	return 0;
}

