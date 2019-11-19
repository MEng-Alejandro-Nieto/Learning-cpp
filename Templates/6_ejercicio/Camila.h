#include <iostream>
using namespace std;

class Camila{
    private:
        string nombre;
        string apellido;
        int edad;
    public:
        Camila(string nombre, string apellido, int edad){
            this-> nombre = nombre;
            this-> apellido = apellido;
            this-> edad = edad;
        }
        ~Camila(){}
        //Getters
        void get_nombre(){cout<<nombre<<endl;}
        void get_apellido(){cout<<apellido<<endl;}
        void get_edad(){cout<<edad<<endl;}
        //Setters
        void set_nombre(string nombre){this-> nombre = nombre;}
        void set_apellido(string apellido){this-> apellido = apellido;}
        void set_apellido(int edad){this-> edad = edad;}
};