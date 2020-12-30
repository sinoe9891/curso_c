#include <iostream>
#ifndef CHURRO_CPP
#define CHURRO_CPP

using namespace std;

class Churro{
	private:
		string nombre;
		double precio;
	public:
		Churro(){
			nombre="";
			precio=0.00;
		}
		//GET RETORNAR LOS VALORES DE LOS ATRIBUTOS
		string getNombre(){
			return nombre;
		}
		double getPrecio(){
			return precio;
		}
		//SET MODIFICA EL ATRIBUTO CON EL VALOR QUE RECIBE COMO PARAMETRO;
		void setNombre(string n){
			nombre=n;
		}
		void setPrecio(double p){
			precio=p;
		}
		//cualquier metodo necesario
		void imprime(){
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Precio: "<<precio<<endl;
		}
};

#endif;
