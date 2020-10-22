#include <iostream>
#include "string"
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	//Operadores condicionales
	/*Menor que (<, por ejemplo, 1 < 10 es verdadero)
	  Mayor que (>, por ejemplo, 1 > 10 es falso)
	  Igual que (==, por ejemplo, 100 == 100 es verdadero, recuerda no confundirlo con el operador de asignación, =)
	  Menor o igual que (<=, por ejemplo, 10 <= 10 es verdadero)
	  Mayor o igual que (>=, por ejemplo, 10 >= 10 es verdadero)
	  Diferente que (!=, por ejemplo, 10 != 10 es falso)*/
	  
	int edad = 0;
	string resultado;
	string mayor = "eres mayor de edad";
	string menor = "eres menor de edad";

    cout << "Introduce tu edad: ";
    cin >> edad;
	
	cout << (edad < 18) ? menor : mayor;
	cout << menor;
	
    //delete resultado;

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

