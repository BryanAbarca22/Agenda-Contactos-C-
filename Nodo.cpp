#include "nodo.h"


nodo::nodo(Contacto*  t, nodo* s) {
	info = t;
	sig = s;
}
nodo:: ~nodo() {
}
void nodo::setInfo(Contacto* t) { info = t; }
Contacto*  nodo::getInfo() { return info; }
void nodo::setSig(nodo* s) { sig = s; }
nodo* nodo::getSig() { return sig; }

string nodo::toStringNodo() {
	return  info->toString();
}


