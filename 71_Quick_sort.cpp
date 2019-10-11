#include <iostream>
#include <conio.h>

using std::cin; using std::cout; using std::endl;

int main(){
	float array[]={9,3,5,4,8,7,1,6,2,0}; int i, j, length, central, pivote, aux;
	length=sizeof(array)/sizeof(array[0]);
	i=0; j=length-1; 
	central=(i+j)/2; 
	pivote=array[central];


	while(i<=j){
		while(array[i]<pivote){
			i++;
		}
		while(array[j]>pivote){
			j--;
		}
		aux=array[i];
		array[i]=array[j];
		array[j]=aux;
	}

	
	for(int k=0;k<length;k++){
		cout<<array[k]<<" ";
	}
	
	
}
