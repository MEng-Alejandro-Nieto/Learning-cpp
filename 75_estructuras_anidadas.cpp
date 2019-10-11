#include <iostream>
using namespace std;
struct ubicacion{
    char direccion[30];
    char ciudad[30];
    char provincia[30];
};

struct informacion{
    char nombre[30];
    struct ubicacion locacion;
    float salario;
}empleados[2];

int main(){
    for(int i=0;i<2;i++){
        fflush(stdin);
        cout<<"Nombre de "<<i+1<<": "; cin.getline(empleados[i].nombre,30,'\n');
        cout<<"Direccion de  "<<i+1<<": "; cin.getline(empleados[i].locacion.direccion,30,'\n');
        cout<<"Ciudad de  "<<i+1<<": "; cin.getline(empleados[i].locacion.ciudad,30,'\n');
        cout<<"Provincia de  "<<i+1<<": "; cin.getline(empleados[i].locacion.provincia,30,'\n');
        cout<<"Salario de "<<i+1<<": "; cin>>empleados[i].salario;
        } 
    for(int j=0;j<2;j++){
        cout<<"El nombre de "<<j+1<<" es: "<<empleados[j].nombre<<endl;
         
        cout<<"El salario de"<<j+1<<" es: "<<empleados[j].salario<<endl;
        }
    return 0;
}