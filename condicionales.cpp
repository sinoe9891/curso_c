#include <iostream>
#include "string"
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	//Operadores condicionales
	/*Menor que (<, por ejemplo, 1 < 10 es verdadero)
	  Mayor que (>, por ejemplo, 1 > 10 es falso)
	  Igual que (==, por ejemplo, 100 == 100 es verdadero, recuerda no confundirlo con el operador de asignaci�n, =)
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

