#include "producto.h"
#include <string>
using namespace std;

producto::producto()
{
    CodigoProducto = "";
    NombreProducto = "";
    PrecioCompra = 0;
    PrecioVenta = 0;
    Existencia = 0;
    Peso = 0;
    Tamano =0;
}

//Constructor
producto::producto(string CodigoProducto, string NombreProducto, double PrecioCompra, double PrecioVenta, int Existencia, double Peso, double Tamano){
    this->CodigoProducto=CodigoProducto;
    this->NombreProducto=NombreProducto;
    this->PrecioCompra=PrecioCompra;
    this->PrecioVenta=PrecioVenta;
    this->Existencia=Existencia;
    this->Peso=Peso;
    this->Tamano=Tamano;
}

//Getters
string producto::getCodigoProducto(){
    return this->CodigoProducto;
}

string producto::getNombreProducto(){
    return this->NombreProducto;
}

double producto::getPrecioCompra(){
    return this->PrecioCompra;
}

double producto::getPrecioVenta(){
    return this->PrecioVenta;
}

int producto::getExistencia(){
    return this->Existencia;
}

double producto::getPeso(){
    return this->Peso;
}

double producto::getTamano(){
    return this->Tamano;
}
//Setters
void producto::setCodigoProducto(string CodigoProducto){
    this->CodigoProducto=CodigoProducto;
}

void producto::setNombreProducto(string NombreProducto){
    this->NombreProducto=NombreProducto;
}

void producto::setPrecioCompra(double PrecioCompra){
    this->PrecioCompra=PrecioCompra;
}

void producto::setPrecioVenta(double PrecioVenta){
    this->PrecioVenta=PrecioVenta;
}

void producto::setExistencia(int Existencia){
    this->Existencia=Existencia;
}

void producto::setPeso(double Peso){
    this->Peso=Peso;
}

void producto::setTamano(double Tamano){
    this->Tamano=Tamano;
}

void producto::mostrarProducto()
{
    cout << "Codigo del Producto: " << CodigoProducto << endl;
    cout << "Nombre del Producto: " << NombreProducto << endl;
    cout << "Precio Compra: " << PrecioCompra << endl;
    cout << "Precio Venta: " << PrecioVenta << endl;
    cout << "Peso del Producto: " << Peso << endl;
    cout << "Tamano del Producto: " << Tamano << endl;
}


