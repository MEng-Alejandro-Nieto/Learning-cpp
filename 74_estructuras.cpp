#include <iostream>

using namespace std;

struct persona{
    char nombre[30];
    int  edad;
}
persona1={"Alejandro",26},
persona2={"Camila",25},
persona3;

int main(){
    cout<<"El nombre de 1 es: "<<persona1.nombre<<endl;
    cout<<"Edad de 1: "<<persona1.edad<<" "<<endl;
    cout<<endl;
    cout<<"El nombre de 2 es: "<<persona2.nombre<<endl;
    cout<<"Edad de 2: "<<persona2.edad<<endl;
    cout<<"\nIngrese el nombre de la persona 3 "; cin.getline(persona3.nombre,30,'\n');
    cout<<"\nIngrese la edad de la persona 3 "; cin>>(persona3.edad);
    cout<<"El nombre de 3 es: "<<persona3.nombre<<endl;
    cout<<"Edad de 3: "<<persona3.edad<<" "<<endl;

    return 0;

}
