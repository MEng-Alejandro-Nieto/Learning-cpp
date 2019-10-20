#include <iostream>

using std::cin; using std::cout; using std::endl;

struct persona{
    char nombre[30];
    int edad;
}p1;

void pedirdatos();
void mostrardatos(persona);

int main(){
    pedirdatos();
    mostrardatos(p1);
    return 0;
}

void pedirdatos(){
    cout<<"Digite su nombre: "; cin.getline(p1.nombre,30,'\n');
    cout<<"edad: "; cin>>p1.edad;
}
void mostrardatos(persona p1){
    cout<<endl;
    cout<<"El nombre ingresado es: "<<p1.nombre<<endl;
    cout<<"La edad ingresada es: "<<p1.edad<<endl;
}