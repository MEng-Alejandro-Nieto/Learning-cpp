#include <iostream>
using namespace std;

class Vehiculo{
    private:
        string marca;
        string color;

    protected:
        string modelo;

        string get_modelo(){
            return modelo;
        }

    public:
        Vehiculo(string marca, string color, string modelo){
            this-> marca = marca;
            this-> color = color;
            this-> modelo = modelo;
    	}
        string get_marca(){
            return marca;
        }
        string get_color(){
            return color;
        }
};
