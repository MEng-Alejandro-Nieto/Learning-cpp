/*
PUNTEROS:

dir_n= &n     ----- Se guardara en "dir_n" la direccion de la variable "n"
var_n=*dir_n  ----- Se mostrara la variable almacenada en la direccion de memoria dir_n
*/

#include <iostream>
using std::cin; using std::cout; using std::endl;

int main(){
    int n,*dir_n,var_n;
    n=50;
    dir_n=&n;
    cout<<"La variable n es: "<<n<<endl;
    cout<<"La direccion de n es: "<<dir_n<<endl;
    return 0;
}
