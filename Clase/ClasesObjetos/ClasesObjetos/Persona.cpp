#include <iostream>
#ifndef PERSONA_CPP
#define PERSONA_CPP

using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
		string correo;
	public:
		Persona(){
			nombre="";
			edad=0;
			correo="";
		}
		//seteador
		void setNombre(string n){
			nombre=n;
		}
		void setEdad(int e){
			edad=e;
		}
		void setCorreo(string c){
			correo=c;
		}
		//geteador
		string getNombre(){
			return nombre;
		}
		int getEdad(){
			return edad;
		}
		string getCorreo(){
			return correo;
		}
		void imprime(){
			cout<<nombre<<endl;
			cout<<correo<<endl;
			cout<<edad<<endl;
		}
	
};
#endif
