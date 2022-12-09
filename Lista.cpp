#include "Lista.h"

Lista::Lista() {
	primero = NULL;
	actual = NULL;
}

void Lista::insertarInicio(Contacto * t){  
	primero=new nodo(t, primero);
}


string Lista::toString() {
	actual = primero;
	stringstream s;
	while (actual != NULL)
	{
		s << actual->toStringNodo();
		actual = actual->getSig();
	}
	
	return s.str();
}

int Lista::cuentaNodos() {
	actual = primero;
	int can = 0;
	while (actual != NULL)
	{
		can++;
		actual = actual->getSig();
	}
	return can;
}


bool Lista::listaVacia() {
	return  (primero == NULL) ? true : false;
}


bool Lista::eliminaInicio() {
	if (primero == NULL) 
	{
		return false;
	}
	else 
	{
		actual = primero;
		primero = primero->getSig();
		delete actual;
		return true;
	}
}




Lista::~Lista() {
	while (!listaVacia())
	{eliminaInicio(); }
}

