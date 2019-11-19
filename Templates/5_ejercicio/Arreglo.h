#include <iostream>
using namespace std;

template <class T>
class Arreglo {
	private:
		int i;
		int n;
		T* arreglo;
		
	public:
		Arreglo(int n){
			i = 0;
			this-> n = n;
			arreglo = new T(n);
		}
		~Arreglo(){ delete[] arreglo;}
		
		void insert_value(){
			T elemento;
			cout<<"Ingrese el valor: "; cin>>elemento;
			arreglo[i]=elemento;
			i++;
			cout<<endl;
		}
		void get_values(){
			for (int j{0};j<i;j++){
				cout<<arreglo[j]<<" ";
			}
			cout<<endl;
		}
		void comprobar_espacio(){
			cout<<"Espacio disponible: "<<n-i<<endl;
		}
		void vaciar_arreglo(){
			for (int j{0};j<n;j++){
				arreglo[j]=0;
			}
			i=0;
			cout<<endl;
		}
	
};
