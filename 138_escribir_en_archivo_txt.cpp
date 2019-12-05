#include <iostream>
#include <stdlib.h>
#include  <fstream>
using namespace std;

void escribir();

int main(){
    escribir();


    system("pause");
    return 0;
}

void escribir(){
    ofstream archivo;
    string nombre_archivo, texto;
    cout<<"Nombre del archivo: "; getline(cin,nombre_archivo);
    cout<<"Texto: "; getline(cin,texto);

    archivo.open(nombre_archivo.c_str(),ios::out);
    //archivo.open("C://Users//aleja//Documents//WATTCO//prueba.txt",ios::out);

    if (archivo.fail()){
        cout<<"Se ha producido un error y el archivo no se pudo crear"<<endl;
        exit(1);
    }
    else{
        archivo<<texto<<endl;
        archivo.close();
    }
}