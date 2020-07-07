/***************************************************************************/
/***************************************************************************/
// METODOLOGÍA DE LA PROGRAMACIÓN 
//
// Clase "Venta"
//
// Fichero: Venta.h
//
/***************************************************************************/
/***************************************************************************/

#ifndef VENTA
#define VENTA

#include <string>
#include <iostream>
#include "fecha.h"
using namespace std;

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

class Venta {

private:

	int 	id_cliente; 
	int 	id_producto; 
	double 	total; 

public: 

	/***********************************************************************/
	// Constructor sin argumentos

	Venta (void): el_id_cliente(0), el_id_producto(0), el_total(0); 
	/***********************************************************************/
	// Constructor con argumentos

	Venta (int el_id_cliente, int el_id_producto, double el_total); 

	/***********************************************************************/
	// Método de consulta: devuelve el "id_cliente" de una "Venta"

	int GetIdCliente (void) const;

	/***********************************************************************/
	// Método de consulta: devuelve el "id_producto" de una "Venta"

	int GetIdProducto (void) const;

	/***********************************************************************/
	// Método de consulta: devuelve el "total" de una "Venta"

	double GetTotal (void) const;

	/***********************************************************************/
	// Operador << Inserta una "Venta" en un flujo de texto. 

	friend ostream & operator << (ostream & out, const Venta & una_venta);

	/***********************************************************************/
	// Operador >> Extrae una "Venta" de un flujo de texto. 

	friend istream & operator >> (istream & in, Venta & una_venta);

	/***********************************************************************/

};

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

#endif