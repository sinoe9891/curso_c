#include <iostream>
#include "string"
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int Edad = 0;

    cout << "Introduce tu edad: ";

    cin >> Edad;

    cout << endl << "Que joven, apenas tienes " << Edad << " a�os"<< endl;


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
� �> \xA0; 
� �> \x82; 
� �> \xA1; 
� �> \xA2; 
� �> \xA3; 
� �> \xA4; 
� �> \xA5;
� -> 160; 
� -> 130; 
� -> 161; 
� -> 162; 
� -> 163; 
� -> 164;
Por ejemplo:

Canci�n >> Canci\xA2n
*/

