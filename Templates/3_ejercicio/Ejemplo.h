#include <iostream>
using namespace std;

template <class T1, class T2>
class Ejemplo{
	private:
		T1 dato1;
		T2 dato2;
	public:
		Ejemplo(T1 dato1, T2 dato2){
			this ->dato1 = dato1;
			this ->dato2 = dato2;
		}
		T1 get_dato1(){return dato1;}
		T2 get_dato2(){return dato2;}
		void set_dato1(T1 dato1){this->dato1=dato1;}
		void set_dato2(T2 dato2){this->dato2=dato2;}
		
		void mostrar_datos(){
			cout<<"El dato1 es: "<<get_dato1()<<endl;
			cout<<"El dato2 es: "<<get_dato2()<<endl;
			cout<<endl;
		}
};



