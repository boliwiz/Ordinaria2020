/***************************************************************************/
/***************************************************************************/
// METODOLOGÍA DE LA PROGRAMACIÓN 
//
// Clase "Clientes"
//
// Fichero: Clientes.h
//
/***************************************************************************/
/***************************************************************************/

#ifndef CLIENTES
#define CLIENTES

#include "cliente.h" 

#include <string>
using namespace std;


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////

class Clientes {

private:
 
    int 	  num_clientes; // Núm.casillas ocupadas
	Cliente * los_clientes; 

public:

	/***********************************************************************/
	// Constructor sin argumentos: Crea lista de 0 clientes (vacia)

	Clientes (void); 

	/***********************************************************************/
	// Constructor con argumentos: Crea lista a partir de un cliente

	Clientes (const Cliente & nuevo_cliente); 

	/***********************************************************************/
	// Destructor
	// Es necesario ya que necesitamos liberar la memoria dinamica reservada
	~Clientes (void); 
	
	/***********************************************************************/
	// Constructor copia

	Clientes (const Clientes & otros);

	/***********************************************************************/
	// Operador de asignacion =

	Clientes & operator = (const Clientes & otros);

	/***********************************************************************/
	// Operador combinado +=

	Clientes & operator += (const Cliente & nuevo_cliente);

	/***********************************************************************/
	// Operador binario +

	Clientes & operator + (const Clientes & otros);

	/***********************************************************************/
	// Método de consulta: núm. de clientes

	int NumClientes (void) const; 

	/***********************************************************************/
	// Método de cálculo: genera un "id_cliente" que no existe

	int GeneraIdCliente (void) const; 

	/***********************************************************************/

private:

	// Peticion / Liberacion de memoria
	void ReservarMemoria(const int num_casillas);
	void LiberarMemoria(void);

	// Copiar datos desde otra coleccion de clientes
	void CopiarDatos (const Clientes & otros);

	// Aniade cliente a coleccion de clientes
	void Aniade (const Cliente & nuevo_cliente);

};

/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


#endif