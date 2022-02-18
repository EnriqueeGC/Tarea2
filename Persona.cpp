#include <iostream>
using namespace std;
class Persona{
	protected : string nombres, apellidos, direccion, fecha;
				int telefono;
	protected : 
			Persona(){
			}
			Persona(string nom, string ape, string dir, int tel, string f){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				fecha = f;
				telefono = tel;
			}
	void mosotrar();
	void agregar();
};