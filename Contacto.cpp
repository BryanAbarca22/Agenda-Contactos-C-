#include "Contacto.h"

Contacto::Contacto() {
	Nombres="";
	Org="";
	Celular=0;
	CasaO=0;
	Correo="";
	
}
Contacto::Contacto(string Nombres, string Org, int Celular,int CasaO,string Correo){
	this->Nombres=Nombres;
	this->Org=Org;
	this->Celular=Celular;
	this->CasaO=CasaO;
	this->Correo=Correo;
}

Contacto::~Contacto() {
	
}

void Contacto::setNombres(string Nombres){
	this->Nombres=Nombres;
}
void Contacto::setOrg(string Org){
	this->Org=Org;
}
void Contacto::setCelular(int Celular){this->Celular=Celular;}

void Contacto::setCasaO(int CasaO){this->CasaO=CasaO;}

void Contacto::setCorreo(string Correo){this->Correo=Correo;}

string Contacto::getNombres(){return Nombres;}

string Contacto::getOrg(){return Org;}

int Contacto::getCelular(){return Celular;}

int Contacto::getCasaO(){return CasaO;}

string Contacto::getCorreo(){return Correo;}


string Contacto::toString(){
	stringstream x;
	x<<"Nombres: \n"<<getNombres();
	x<<"Organizacion: \n"<<getOrg();
	x<<"Celular: \n"<<getCelular();
	x<<"Casa/Oficina: \n"<<getCasaO();
	x<<"Correo Electronico: \n"<<getCorreo();
	
	return x.str();
}

void Contacto::Guardado(ofstream& estFile){
	cout << "    <<Guardando...>>" << endl;
	cout << toString() << endl;
	estFile << Nombres  << endl
		<< Org << endl
		<< Celular << endl
		<< CasaO << endl
		<< Correo << endl;
	
	
}
Contacto*  Contacto::Leer(ifstream& estFile) {
	
	string Nombres, Correo, Org;
	int Celular, CasaO; 
	
	if (!(estFile >> Nombres)) { return NULL; }
	if (!(estFile >> Org)) { return NULL; }
	if (!(estFile >> Celular)) { return NULL; }
	if (!(estFile >> CasaO)){ return NULL;}
	if (!(estFile >> Correo)){ return NULL; }
	return new Contacto(Nombres, Org, Celular, CasaO,Correo);
	
}



