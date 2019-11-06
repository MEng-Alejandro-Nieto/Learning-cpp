class Punto{
    //Atributos
    private:
        int x,y;

    //Metodos
    public:
        Punto(int _x, int _y){ 	//Constructor 1
            x = _x; 
            y = _y;
        }
        Punto(){				//Constructor 2 
           x = y = 0;
        }

        void setX(int valorX);  // Establecer el valor de X
        void setY(int valorY);  // Establecer el valor de Y
        int getX();             // Obtener el valor de X
        int getY();             // Obtener el valor de Y
};
