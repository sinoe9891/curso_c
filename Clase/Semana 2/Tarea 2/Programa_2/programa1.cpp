#include <iostream>
#include "string"
using namespace std;
/*
Danny Sinoé Velásquez Cadenas
Cree un programa que imprima los numeros de 2 en 2 del número 0 al numero 1000. 
*/

int main(int argc, char** argv) {
	int i = 0;
	while(i < 100) {
		i += 2;
		cout<< i <<"\n";
	}
	return 0;
}
