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
    
    for(int i=50;i<=100;i+=2)
    {//Notemos que escribir i+=2 es similar a escribir i = i + 2
        cout << i << endl;
    }
    
	return 0;
}


