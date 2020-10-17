#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	//<tipo> <nombre>
	int numero = 10;
	char letra = 'L';
	string palabra = "Hola Mundo";
	bool estado = true;
	double numeroDecimal = 11.09;
	
	cout<< palabra <<endl;
	cout<< numero <<endl;
	//
	
	//Si no importamos el "using namespace std" nos tocaría escribir cada vez:
	std::cout<< "Hola \n" <<endl;
	std::cout<< palabra <<endl;
	//Ingresar valores
	cin>> numero;
	cout<< "El valor introducido fue: " << numero << endl;
	cout<< "El valor introducido + 10 es: " << numero+10 << endl;
		
	return 0;
}
