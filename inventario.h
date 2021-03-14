#include "producto.h"
#include "cliente.h"

using namespace std;

class inventario
{
    public:
    double * cantidades;
    producto * productos;
    int totalproductos;

    public:
    inventario();
    inventario(double * cantidades, producto * productos, int totalproductos);
    int buscarProducto(string prod);
    void mostrarInventario();
    void anadirProducto(producto prod, int cantidad);
    void editarProducto(string prod, int cantidad);
    void borrarProducto(string prod);

    
};