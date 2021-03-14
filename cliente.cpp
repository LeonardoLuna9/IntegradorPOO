#include "cliente.h"
#include <string>

//Constructor

cliente::cliente()
{
    Nombre= "";
    Direccion="";
    RFC ="";
}

cliente::cliente(string Nombre, string Direccion, string RFC){
    this->Nombre=Nombre;
    this->Direccion=Direccion;
    this->RFC=RFC;
}

//getters
string cliente::getNombre(){
    return this->Nombre;
}

string cliente::getDireccion(){
    return this->Direccion;
}

string cliente::getRFC(){
    return this->RFC;
}

//Setters
void cliente::setNombre(string Nombre){
    this->Nombre=Nombre;
}

void cliente::setDireccion(string Direccion){
    this->Direccion=Direccion;
}

void cliente::setRFC(string RFC){
    this->RFC=RFC;
}

