/*
TIPOS DE HERENCIA
1.  Herencia PUBLICA significa que una clase derivada tiene acceso a 
    los elementos publicos y protegidos de su clase base. Los elementos 
    publicos se heredan como elementos publicos; los elementos protegidos 
    permanecen protegidos y los elementos privados no se heredan

class ClaseDerivada : public ClaseBase{
    private:
        //seccion privada
    public:
        //seccion publica
    proteted:
        //seccion protegida
}
2.  Herencia PRIVADA, los miembros publicos y protegidos de la clase base
    se vuelven miembros privados de la clase derivada. En efecto, los 
    usuarios de las clase derivada no tienen acceso a las facilidades 
    proporcionadas por la clase base. Los miembros privados de la clase
    base son inaccesibles a la funciones miembros de la clase derivada

class ClaseDerivada : private ClaseBase{
    private:
        //seccion privada
    public:
        //seccion publica
    proteted:
        //seccion protegida

3.  Herencia PROTEGIDA, los miembros publicos y protegidos de la clase 
    base se convierten en mimebros protegidos de la clase derivada y 
    los miembros privados de la clase base se vuelven inaccesible 

    class ClaseDerivada : protected ClaseBase{
    private:
        //seccion privada
    public:
        //seccion publica
    proteted:
        //seccion protegida

*/