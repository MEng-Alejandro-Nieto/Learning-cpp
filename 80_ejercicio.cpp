/*
Hace 2 estructuras, una llamada promedio que tendra los siguientes 
campos: nota1, nota2, nota3; y otro llamada alumno que tendra los 
siguientes miembros: nombre, sexo, edad, hacer que la estructura promedio
este anidada en la estructura alumno, luego pedir todos los datos para 
un alumno, luego calcular su promedio y por ultimo imprimir sus datos
incluido su promedio.
*/

#include<iostream>
#include<string.h>
using std::cin; using std::cout; using std::endl;


struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[30];
    char sexo[30];
    int edad;
    struct promedio notas;
}joven[100];


int main(){
    int N ;
    cout<<"Cuantos alumnos tiene en clase: "; cin>>N;
    for(int i=0;i<N;i++){
        fflush(stdin);
        cout<<i+1<<". Nombre: ";    cin.getline(joven[i].nombre,30,'\n');
        cout<<i+1<<". Sexo: ";      cin.getline(joven[i].sexo,30,'\n');
        cout<<i+1<<". edad: ";        cin>>joven[i].edad;
        cout<<i+1<<". Nota 1: ";    cin>>joven[i].notas.nota1;
        cout<<i+1<<". Nota 2: ";    cin>>joven[i].notas.nota2;
        cout<<i+1<<". Nota 3: ";    cin>>joven[i].notas.nota3; cout<<endl;
    }      
    cout<<"RESULTADOS: \n\n";
    for(int i=0;i<N;i++){
        cout<<joven[i].nombre<<endl;
        cout<<joven[i].edad<<endl;
        cout<<joven[i].sexo<<endl; 
        cout<<"Promedio: "<<(joven[i].notas.nota1+joven[i].notas.nota2+joven[i].notas.nota3)/3<<endl;                       
        cout<<endl;
    }

    return 0;
}