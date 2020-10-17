#include <iostream>
#include "string"
using namespace std;
/* Danny Velásquez Cadenas*/

int main(int argc, char** argv) {
	
	string nombre;
	string apellido;
	float numDecimaluno, numDecimaldos;
	

	cout<< "Ingresar primer nombre:" <<endl;
	//cin>> nombre;
    getline(cin, nombre);
	cout<< "Ingresar primer apellido:" <<endl;
	//cin>> apellido;
	getline(cin, apellido);
	
	cout<< "Ingresar un numero decimal:" <<endl;
	cin>> numDecimaluno;
	
	cout<< "Ingresar un numero decimal:" <<endl;
	cin>> numDecimaldos;
	
	cout<< "<<------------------->>" <<endl;
	cout<< "Nombre completo del usuario: " << nombre << " "<< apellido<< endl;
	
	cout<< "Números ingresados fueron: " << endl;
	cout<< numDecimaluno << endl;
	cout<< numDecimaldos << endl;
	cout<< "Sumados darian: " << endl;
	cout<< numDecimaluno + numDecimaldos << endl;
	
	return 0;
}
