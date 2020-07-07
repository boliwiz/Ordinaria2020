/***************************************************************************/
/***************************************************************************/
// METODOLOGÍA DE LA PROGRAMACIÓN 
//
// Clase "Cliente"
//
// Fichero: Cliente.h
//
/***************************************************************************/
/***************************************************************************/

#ifndef CLIENTE
#define CLIENTE

#include <string>
#include <iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

class Cliente {

private:

	int 	id_cliente; 
	double 	descuento; 
	string 	nombre; 
	string 	NIF; 

public: 

	/***********************************************************************/
	// Constructor sin argumentos
	// Necesario puesto que el constructor sin argumentos de la coleccion
	// usa este constructor para cada elemento de la coleccion.

	Cliente (void); 
	
	// No es necesario implementar el destructor, puesto que no usamos 
	// el operador new para crear el objeto dinamicamente.
	// ~Cliente (void); 

	/***********************************************************************/
	// Constructor con argumentos

	Cliente (string el_NIF, double el_descuento, 
		     string el_nombre, int el_id_cliente=0); 


	// No son necesarios el constructor copia, ni el operador de asignacion

	/***********************************************************************/
	// Método de escritura: modifica el "id_cliente"

	void SetIdCliente (int el_id_cliente); 
	
	/***********************************************************************/
	// Método de consulta: devuelve el "id_cliente" de un "Cliente"

	int GetIdCliente (void) const;

	/***********************************************************************/
	// Método de consulta: devuelve el "descuento" de un "Cliente"

	double GetDescuentoCliente (void) const;

	/***********************************************************************/
	// Método de consulta: devuelve el "nombre" de un "Cliente"

	string GetNombreCliente (void) const;

	/***********************************************************************/
	// Método de consulta: devuelve el "NIF" de un "Cliente"

	string GetNIFCliente (void) const;

	/***********************************************************************/
	// Operador << Inserta un "Cliente" en un flujo de texto. 

	friend ostream & operator << (ostream & out, const Cliente & un_cliente);

	/***********************************************************************/
	// Operador >> Extrae un "Cliente" de un flujo de texto. 

	friend istream & operator >> (istream & in, Cliente & un_cliente);

	/***********************************************************************/

private:

	// Aniadir nuevo cliente a la lista de clientes
	void Aniade (const Cliente & nuevo_cliente);
};

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

#endif