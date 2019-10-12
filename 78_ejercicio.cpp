/*
Realizar un programa que lea un arreglo de estructuras, los datos de N
empleados de la empresa y que imprima  los datos del empleado con mayor
y menor salario


*/
#include <iostream>
#include <string.h>
using std::cin; using std::cout; using std::endl;
struct datos{
    char nombre[30];
    int salario;
}empleados[100];

int main(){
    int N{0},mayor{0}, menor,j{0},k;
    cout <<"cuantos empleados tiene la empresa: "; cin>>N;
    for(int i{0};i<N;i++){
        fflush(stdin);
        cout<<i+1<<". Nombre: "; cin.getline(empleados[i].nombre,30,'\n');
        cout<<i+1<<". Salario: ";cin>>empleados[i].salario;
        cout<<endl;
        if(empleados[i].salario>mayor){
            mayor=empleados[i].salario;j=i;
        }

        if(i==0){
            menor=empleados[i].salario;
        }
        else if(empleados[i].salario<menor){
            menor=empleados[i].salario;
            k=i;
        }
    }
fflush(stdin);
cout<<"Mayor salario: "<<endl;  cout<<empleados[j].nombre<<" con "<<empleados[j].salario<<endl;
fflush(stdin);
cout<<"Menor salario: "<<endl;  cout<<empleados[k].nombre<<" con "<<empleados[k].salario;
    return 0;
}