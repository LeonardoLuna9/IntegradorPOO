#include "inventario.h"


using namespace std;

class orden
{
    private:
    string referencia;
    double PrecioTotal;
    inventario InventarioOrden;
    cliente Cliente;
    string FormadePago;


    public: 
    orden();
    orden(string referencia, double PrecioTotal, inventario InventarioOrden, cliente Cliente, string FormadePago);
    string getReferencia();
    double getPrecioTotal();
    inventario getInventario();
    cliente getCliente();
    string getFormadePago();

    void setPrecioTotal();
    void setFormadePago(); 
    
    void calculartotal();
    void agregarProducto(string prod, int cant, inventario Inventario1);
    void quitarProducto(string prod);
    void Mostrardetalles(); //Productos, PrecioTotal, Cliente
    
};
