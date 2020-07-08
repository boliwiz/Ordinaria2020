#include <iostream>
#include <fstream>

#include "cliente.h"
#include "clientes.h"

using namespace std;

// Constructor sin argumentos (lista de clientes vacia)
Clientes :: Clientes (void): num_clientes (0), los_clientes (0) { }

// Constructor a partir de un cliente
Clientes :: Clientes (const Cliente & nuevo_cliente): num_clientes (0), los_clientes (0) {
    Aniade (nuevo_cliente);
}

// Destructor
// Es necesario ya que necesitamos liberar la memoria dinamica reservada
Clientes :: ~Clientes (void){
    LiberarMemoria();
}


// Constructor copia
Clientes :: Clientes (const Clientes & otros){
    ReservarMemoria (otros.num_clientes);
    CopiarDatos (otros);
}

// Operador de asignacion =
Clientes & Clientes :: operator = (const Clientes & otros){
    if(this != &otros){     // Evitar autoasignacion
        LiberarMemoria();
        ReservarMemoria(otros.num_clientes);
        CopiarDatos(otros);
    }
    return (*this);
}

// Operador combinado +=
Clientes & Clientes :: operator += (const Cliente & nuevo_cliente){
    Cliente aux = nuevo_cliente;
    bool nuevo = true;
    int indice=0;
    while(indice<num_clientes){
        if (los_clientes[indice].GetNIFCliente() == aux.GetNIFCliente())
            nuevo = false;
        indice++;
    }
    if (nuevo){
        aux.SetIdCliente(GeneraIdCliente());
        this->Aniade(aux);
    }
    return (*this);
}

// Operador binario +
Clientes & Clientes :: operator + (const Clientes & unos, const Clientes & otros){
    Clientes total (unos);
    for(int i=0; i<otros.num_clientes; i++){
        bool nuevo = true;
        for (int j=0;j<unos.num_clientes;j++){
            if (unos[j].GetNIFCliente() == otros[i].GetNIFCliente())
                nuevo = false;
        }
        if (nuevo){
            Cliente nuevo_cliente = otros[i];
            nuevo_cliente.SetIdCliente(GeneraIdCliente());
            total.Aniade(nuevo_cliente);
        }

    }
    return (total);
}


