#include <iostream>
#include "Persona.cpp"
using namespace std;
class Cliente : Persona {
	private: string nit; 
			 double cui;
	
	public :
	Cliente (){
	} 
	Cliente(string nom, string ape, string dir, int tel, string f, string n, double c) : Persona(nom, ape, dir, tel, f){
		nit = n;
		cui = c;
	}
	//set (modificar)
	void setNit(string n){nit = n;}
	void setCui(double c){cui = c;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha(string f){fecha = f;}
	void setTelefono(int tel){telefono = tel;}
	//get (mostrar)
	string getNit(){return nit;}
	double getCui(){return cui;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	string getFecha(){return fecha;}
	int getTelefono(){return telefono;}
	//Metodos
	void mostrar(){
		cout<<"____________________"<<endl;
		cout<<nombres<<","<<apellidos<<","<<direccion<<","<<fecha<<","<<telefono<<","<<nit<<","<<cui;
	}
};