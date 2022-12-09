#include "lista.h"

int main() {
/*	Lista * l1= new Lista;
	Lista * l2= new Lista;
	
	Contacto * c1=new Contacto("Pepe","java", 202, 4512,"papa");
	Contacto * c2=new Contacto("Pepa","java", 202, 4512,"papa");
	
	
	l1->insertarInicio(c1);
	l2->insertarInicio(c2);

	
	int cont=l1->cuentaNodos();
	int cont2=l2->cuentaNodos();

	string Nombre=l1->toString();
	string Nombre2=l2->toString();
	
	if(cont!=cont2){
		cout<<"NO IGUALES \n";
	}else{
		if(Nombre==Nombre2){
			cout<<"Son iguales";
		}else{
			cout<<"NO IGUALES \n";
		}
	}
	
	
	
	*/
	
	
	
	ifstream entrada;
	ofstream salida;
	int Celular,CasaO;
	string Nombre,Org,Correo;
	Lista* li=NULL;
	for(;;){
	cout << endl << ".........MENU........." << endl;
	

		
		cout << endl << "Ingrese los datos:" << endl;
		salida.open("C:/Users/pc/Desktop/Contactos.txt", ios::app);
		cout << "Nombre: ";
		cin >> Nombre;cout << endl;
		cout << "Organizacion: ";
		cin >> Org;cout << endl;
		cout << "Celular: ";
		cin >> Celular;cout << endl;
		cout << "Casa/Oficina: ";
		cin >> CasaO;cout << endl;
		cout << "Correo: ";
		cin >> Correo;
		cout << endl;
		Contacto* Cont = new Contacto(Nombre, Org, Celular, CasaO, Correo);
		Cont->Guardado(salida);
		salida.close();  
		delete Cont;
		cout << " ---->Guardado...." << endl;
		break;
	}
	
	
	delete li;
	
	return 0;
}
