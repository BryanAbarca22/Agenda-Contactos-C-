#ifndef NODO_H
#define NODO_H
#include <iostream>
#include "Contacto.h"
using namespace std;

class nodo
{
private:
	Contacto*  info;
	nodo * sig;
public:
	nodo(Contacto*, nodo*);
	~nodo();
	void setInfo(Contacto*);
	Contacto* getInfo();
	void setSig(nodo*);
	nodo* getSig();
	string toStringNodo();
};

#endif

