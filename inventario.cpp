#include "inventario.h"

using namespace std;


inventario::inventario()
{
    cantidades = 0;
    productos = 0;
    totalproductos = 0;

}

inventario::inventario(double * cantidades, producto * productos, int totalproductos)
{
    this->cantidades=cantidades;
    this->productos=productos;
    this->totalproductos=totalproductos;
    
}

int inventario::buscarProducto(string prod)
{
    for (int i = 0; i<=totalproductos; i++)
    {
        if (productos[i].getCodigoProducto() == prod)
        {
            return i;
        }
    }
    return -1;
}

void inventario::editarProducto(string prod, int cantidad)
{
    int i = buscarProducto(prod);
    cantidades[i] = cantidad;
}

void inventario::anadirProducto(producto prod, int cant)
{
    productos[totalproductos] = prod;
    cantidades[totalproductos] = cant;
    totalproductos += 1;
}

void inventario::mostrarInventario()
{
    for (int i=0; i<totalproductos; i++)
    {
        productos[i].mostrarProducto();
        cout<< "Cantidad: " << cantidades[i] << endl;
    }
}

void inventario::borrarProducto(string prod)
{
    if(totalproductos>0)
    {
        int i = buscarProducto(prod);
        if (i>=0)
        {
            productos[i] = productos[totalproductos-1];
            cantidades[i] = cantidades[totalproductos-1];

            productos[totalproductos-1] = productos[totalproductos];
            cantidades[totalproductos-1] = 0;

            totalproductos --;
        }
    }
}

