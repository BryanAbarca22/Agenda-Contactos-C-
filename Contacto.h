#ifndef CONTACTO_H
#define CONTACTO_H
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
class Contacto {
public:
    Contacto();
    Contacto(string Nombres, string Org, int Celular,int CasaO,string Correo);
    ~Contacto();
    void setNombres(string Nombres);
    void setOrg(string Org);
    void setCelular(int Celular);
    void setCasaO(int CasaO);
    void setCorreo(string Correo);
    string getNombres();
    string getOrg();
    int getCelular();
    int getCasaO();
    string getCorreo();
	string toString();
	virtual void Guardado(ofstream&);
	static Contacto *Leer(ifstream&);
	
private:
    string Nombres;
    string Org;
    int Celular;
    int CasaO;
    string Correo;
};

#endif
