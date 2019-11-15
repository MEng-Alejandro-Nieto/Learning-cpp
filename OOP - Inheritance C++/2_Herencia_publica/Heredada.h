#include <iostream>
#include "Vehiculo.h"
using namespace std;

class Heredada : public Vehiculo{
    private:
        int numero_puertas;

    public:
        Heredada(string marca, string color, string modelo, int numero_puertas):Vehiculo(marca, color, modelo){
            this->numero_puertas = numero_puertas;
        }
        int get_numero_puertas(){
            return numero_puertas;
        }
};
