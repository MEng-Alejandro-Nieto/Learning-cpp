/*
Determinar si un numero es primo o no con punteros e indicar en
que posicion de memoria se guardo el numero
*/
#include <iostream>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////////
int n,*dir_n;
//////////////////////////////////////////////////////////////
void pregunta();
void primo(int);
//////////////////////////////////////////////////////////////
int main(){
    pregunta();
    primo(n);
    return 0;
}
//////////////////////////////////////////////////////////////
void pregunta(){
    cout<<"Digite un numero para comprobar si es primo: "; cin>>n;
}
void primo(int n){
    dir_n=&n;
    if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
        if(n==2 || n==3 || n==5 || n==7){
            cout<<"El numero "<<*dir_n<<" es primo y su direccion es "<<dir_n;
        }
        else{
            cout<<"El numero "<<*dir_n<<" no es primo y su direccion es "<<dir_n;
        }
    }
    else{
        cout<<"El numero "<<*dir_n<<" es primo y su direccion es "<<dir_n;
    }

}
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
