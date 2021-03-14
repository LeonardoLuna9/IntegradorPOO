#include <string>
#include <iostream>
using namespace std;


class cliente
{
    private:
    string Nombre;
    string Direccion;
    string RFC;
    
    public:
    cliente();
    //constructor
    cliente(string Nombre, string Direccion, string RFC);
    //getters
    string getNombre();
    string getDireccion();
    string getRFC();
    //setters
    void setNombre(string Nombre);
    void setDireccion(string Direccion);
    void setRFC(string RFC);

};
