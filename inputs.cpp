#include <iostream>
#include "string"
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int Edad = 0;

    cout << "Introduce tu edad: ";

    cin >> Edad;

    cout << endl << "Que joven, apenas tienes " << Edad << " años"<< endl;


    int base,altura;
    cout << "Introduce la base de tu rectangulo: " << endl;
    cin >> base;
    cout << "Introduce la altura de tu rectangulo" << endl;
    cin >> altura;

    cout << "El area de tu rectangulo es: " << base * altura << endl;

    char miLetraFavorita;

    cout << "Cual es tu letra favorita?" << endl;
    cin >> miLetraFavorita;
    cout << "Oh tambien la mia es: " << miLetraFavorita << endl;

    int* valorA = new int;
    int* valorB = new int;

    cout << "Introduce el primer valor a multiplicar: " << endl;
    cin >> *valorA;

    cout << "Introduce el segundo valor a multiplicar: " << endl;
    cin >> *valorB;

    cout << "El resultado es: " << *valorA * *valorB;

    delete valorA;
    delete valorB;
}

/*
#include "string"
getline(cin, apellido);
á –> \xA0; 
é –> \x82; 
í –> \xA1; 
ó –> \xA2; 
ú –> \xA3; 
ñ –> \xA4; 
Ñ –> \xA5;
á -> 160; 
é -> 130; 
í -> 161; 
ó -> 162; 
ú -> 163; 
ñ -> 164;
Por ejemplo:

Canción >> Canci\xA2n
*/

