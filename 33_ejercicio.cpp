/*
En una clase de 5 alumnos se han realizado tres examenes y se requiere 
detemrinar el numero de:
a) Alumnos que aprobaron todos los examenes.
b) Alumnos que aprobaron al menos un examen.
c) Alumnos que aprobaron unicamente el ultimo examen

Se aprueba el examen con una nota superior a 3.
*/

#include <iostream>
#include <math.h>
using std:: cout; using std:: cin; using std:: endl;

int main(){
    int nota1,nota2,nota3,a{0},b{0},c{0};
    for(int i{1};i<=5;i++){
        
        cout<<i<<". La primera nota es: "; cin>>nota1;
        cout<<i<<". La segunda nota es: "; cin>>nota2;
        cout<<i<<". La tercera nota es: "; cin>>nota3;

        if(nota1>=3 && nota2>=3 && nota3>=3){
            a+=1;
        }     
        if(nota1>=3 || nota2>=3 || nota3>=3){
            b+=1;
        }
        if(nota3>=3 && nota2<3 && nota1<<3){
            c+=1;
        }
        cout<<endl;
    }
    cout<<"Alumnos que aprobaron todos los examenes: "<<a<<endl;
    cout<<"Alumnos que aprobaron al menos un examen: "<<b<<endl;
    cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<c<<endl;
}











