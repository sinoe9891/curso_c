#include <iostream>
#include "string"
using namespace std;
/*
Danny Velásquez Cadenas
Fecha: 20/11/2020
Cree un programa con las siguientes caracteristicas:

Cree tres arreglos unidimensionales de tipo double de tamaño 5.
Solicite al usuario ingresar los valores de los primeros arreglos.
El tercer arreglo debe llenarse con la suma de los dos primeros arreglos para cada posicion.
Imprima los tres arreglos.*/

int main(int argc, char** argv) {
	double arreglo1[5];
	double arreglo2[5];
	double arreglo3[5];
	
	for(int i = 0; i < 5; i++){
        cout<<i+1<<") "<<"Por favor ingrese el valor del 1er arreglo"<<endl;
        cin>>arreglo1[i];
        cout<<endl;
    }
    
    for(int i = 0; i < 5; i++){
        cout<<i+1<<") "<<"Por favor ingrese el valor del 2do arreglo"<<endl;
        cin>>arreglo2[i];
        cout<<endl;
    }
    
    
    cout<<"El resultado de la suma del arreglo1 + arreglo2 es:"<<endl;
    cout<<"arreglo 3"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"["<<i<<"] ";
	    arreglo3[i] = arreglo1[i] + arreglo2[i];
	    cout<<arreglo3[i]<<endl;
	}

	return 0;
}
