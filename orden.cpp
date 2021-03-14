#include "orden.h"

using namespace std;

orden::orden()
{
    referencia = "";
    PrecioTotal = 0;
    InventarioOrden = InventarioOrden;
    Cliente = Cliente;
    FormadePago = "default";
}

orden::orden(string referencia, double PrecioTotal, inventario InventarioOrden, cliente Cliente, string FormadePago)
{
    this->referencia=referencia;
    this->PrecioTotal=PrecioTotal;
    this->InventarioOrden=InventarioOrden;
    this->Cliente=Cliente;
    this->FormadePago=FormadePago;
}

void orden::agregarProducto(string prod, int cant, inventario Inventario1)
{
    int buscador = Inventario1.buscarProducto(prod);
    if (buscador >=0)
    {
        InventarioOrden.anadirProducto(Inventario1.productos[buscador], cant);
    }
}

void orden::calculartotal()
{
    double PrecioProd;
    int cantidad;
    for (int i=0; i<InventarioOrden.totalproductos; i++)
    {
        PrecioProd = InventarioOrden.productos[i].getPrecioVenta();
        cantidad = InventarioOrden.cantidades[i];
        PrecioTotal = PrecioTotal + PrecioProd*cantidad; 
    }

}

void orden::Mostrardetalles()
{
    //procesarTotal();
    cout << "Referencia de orden: " << referencia << endl;
    cout << "Nombre Cliente: " << Cliente.getNombre() << endl;
    cout << "Productos comprados: " << endl;
    InventarioOrden.mostrarInventario();
    cout << "Total a Pagar: " << PrecioTotal << endl;

}