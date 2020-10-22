#include <iostream>
#include "string"
using namespace std;
/*
Danny Sinoé Velásquez Cadenas
Cree un programa que solicite su nombre y un número entero, el programa debe imprimir su nombre la cantidad de veces del numero entero.
*/

int main(int argc, char** argv) {
	string nombre;
	int numero;
	int i = 0;
	
	cout<< "Ingresar nombre:" <<endl;
    getline(cin, nombre);
	
	cout<< "Ingresar n\xA3mero de veces que desea repetir:" <<endl;
    cin>> numero;
    
	while(i < numero) {
		i++;
		cout<< i << ".- " << nombre <<"\n";
	}
    
    
	return 0;
}


