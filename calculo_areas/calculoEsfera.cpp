#include <iostream>
#include "string"
#include<cmath>
using namespace std;
/* Danny Velásquez Cadenas*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double radio, pi = 3.141, resultado;
	
	cout<<"Ingrese un n\xA3mero para calcular una esfera"<<endl;
	cin>> radio;
	
	resultado = 4 * pi * pow(radio,2);
	
	cout<<"El resultado es: "<< resultado <<endl;
	
	return 0;
}

