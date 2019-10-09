#include <iostream>
#include <conio.h>
#include <string.h>
using std::cin; using std::cout; using std::endl;


int main(){
	int arreglo[]={10,1,3,3,3,9,2,8,3,7,6,4,5};
	int length{0},aux{0};
	length=sizeof(arreglo)/sizeof(arreglo[0]);
	
	
	for(int i{0};i<length;i++){
		for(int j{0};j<length;j++){
			if(arreglo[j]>arreglo[j+1]){
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
			}
		}
	}
	for (int k{0};k<length;k++){
		cout<<arreglo[k]<<endl;
	}
	getch();
	return 0;
}
	
	


