#include <iostream>

#include "cliente.h"

using namespace std;


/*********************************************************************/
// No son necesarios el constructor copia, ni el operador de asignacion
// // Constructor de copia
// Cliente :: Cliente (const Cliente & otro){
//     id_cliente = otro.id_cliente;
//     descuento = otro.descuento;
//     nombre = otro.nombre;
//     NIF = otro.NIF;
// }

// // Operador asignacion
// void Cliente::operator= (const Cliente & origen){
//     this->id_cliente = origen.id_cliente;
//     this->descuento = origen.descuento;
//     this->nombre = origen.nombre;
//     this->NIF = origen.NIF;
    
// }

/*********************************************************************/
/****************  REVISAR  ******************************************/
/*********************************************************************/
// Operador ==
bool operator == (const Cliente & otro){
    return ((NIF == otro.GetNIFCliente())? true:false);
}

/*********************************************************************/
// Operador << 
ostream& operator << (ostream & out, const Cliente &un_cliente){
    out << un_cliente.id_cliente << " " << un_cliente.descuento <<
        " " << un_cliente.nombre << " " << un_cliente.NIF;
    return out;
}

/*********************************************************************/
// Operador >>
istream& operator >> (istream & in, Cliente & un_cliente){
    in >> un_cliente.id_cliente >> un_cliente.descuento >> 
        un_cliente.nombre >> un_cliente.NIF;
    return in;
}