#include <string>
#include <iostream>
using namespace std;

class producto
{
private:
    string CodigoProducto;
    string NombreProducto;
    double PrecioCompra;
    double PrecioVenta;
    int Existencia;
    double Peso;
    double Tamano;

public:
    producto();
    //Constructor  
    producto(string CodigoProducto, string NombreProducto, double PrecioCompra, double PrecioVenta, int Existencia, double Peso, double Tamano);
    //Getters
    string getCodigoProducto();
    string getNombreProducto();
    double getPrecioCompra();
    double getPrecioVenta();
    int getExistencia();
    double getPeso();
    double getTamano();
    //Setters
    void setCodigoProducto(string CodigoProducto);
    void setNombreProducto(string NombreProducto);
    void setPrecioCompra(double PrecioCompra);
    void setPrecioVenta(double PrecioVenta);
    void setExistencia(int Existencia);
    void setPeso(double Peso);
    void setTamano(double Tamano);

    void mostrarProducto();
};
