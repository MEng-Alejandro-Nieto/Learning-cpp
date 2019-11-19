#include <iostream>
using namespace std;

template <typename Tipo1>
void ascendente(Tipo1* arreglo, int n){
	for(int i{0};i<n;i++){
		for(int j{0};j<(n-1);j++){
			if(*(arreglo+j)>*(arreglo+j+1)){
				float aux{0};
				aux=*(arreglo+j);
				*(arreglo+j)=*(arreglo+j+1);
				*(arreglo+j+1)=aux;
			}	
		}
	}
}

template <typename Tipo1>
void descendente(Tipo1* arreglo, int n){
	for(int i{0};i<n;i++){
		for(int j{0};j<(n-1);j++){
			if(*(arreglo+j)<*(arreglo+j+1)){
				float aux{0};
				aux=*(arreglo+j);
				*(arreglo+j)=*(arreglo+j+1);
				*(arreglo+j+1)=aux;
			}	
		}
	}
}
template <typename Tipo>
void preguntar(Tipo* arreglo,int n){
	for(int i{0};i<n;i++){
		cout<<"Posicion "<<i<<": "; cin>>*(arreglo+i);
	}	
}

template <typename Tipo>
void mostrar(Tipo* arreglo,int n){
	cout<<endl;
	cout<<"El arreglo ordenado es:"<<endl;
	cout<<"[";
	for(int i{0};i<n;i++){
		if(i==n-1){cout<<*(arreglo+i)<<"]";}
		else{cout<<*(arreglo+i)<<", ";}	
	}
}








