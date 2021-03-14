#include "orden.h"
#include <iostream>

using namespace std;

int main(){

    double * cantidades;
    producto * productos;
    cantidades = new double[99];
    productos = new producto[99];

    double * cantidadesor;
    producto * productosor;
    cantidadesor = new double[99];
    productosor = new producto[99];

    inventario Inventario1(cantidades, productos, 0);
    inventario InventarioOrden(cantidadesor, productosor, 0);

    producto p1("a1", "Lapiz", 10, 15, 3, 4, 4);
    producto p2("b2", "Borrador", 8, 10, 5, 3, 3);
    producto p3("c3", "Pluma", 15, 20, 10, 5, 5);
    producto p4("d4", "Pegamento", 25, 30, 2, 6, 6);
    producto p5("e5", "Tijeras", 40, 50, 4, 7, 7);
    producto p6("f6", "Marcatextos", 30, 40, 10, 8, 8);
    producto p7("g7", "Regla", 35, 45, 8, 9, 9);
    producto p8("h8", "Sacapuntas", 45, 55, 7, 10, 10);

    Inventario1.anadirProducto(p1,p1.getExistencia());
    Inventario1.anadirProducto(p2,p2.getExistencia());
    Inventario1.anadirProducto(p3,p3.getExistencia());
    Inventario1.anadirProducto(p4,p4.getExistencia());
    Inventario1.anadirProducto(p5,p5.getExistencia());
    Inventario1.anadirProducto(p6,p6.getExistencia());
    Inventario1.anadirProducto(p7,p7.getExistencia());
    Inventario1.anadirProducto(p8,p8.getExistencia());

    Inventario1.editarProducto("a1", 42);
    Inventario1.borrarProducto("h8");

    cliente c1("Leonardo Luna","Los Cabos Baja Sur","LUFL1923764");
    cliente c2("Gerado Encinas","Hermosillo Sonora","GEEN4385243");
    cliente c3("Stanislaskwy Barajas","Zapopan Jalisco","STBA1237463");

    c1.setNombre("Ivana Rene");
    c1.setDireccion("Monterrey, Nuevo Leon");
    c1.setRFC("IVRE6836453");

    c2.setNombre("");
    c2.setDireccion("");
    c2.setRFC("");


    InventarioOrden.anadirProducto(p1,2);
    InventarioOrden.anadirProducto(p2,3);
    orden o1("Orden 1", 0, InventarioOrden, c1, "Efectivo");

    o1.Mostrardetalles(); 

    
}

