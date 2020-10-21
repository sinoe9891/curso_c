#include <iostream>
#include "string"
#include<cmath>
using namespace std;
/* Danny Velásquez Cadenas*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double radio;
	double resultado;
	
	cout<<"Ingrese un n\xA3mero para calcular area del circulo"<<endl;
	cin>> radio;
	
	resultado = pow(radio,2) * 3.1416;
	
	cout<<"El resultado es: "<< resultado <<endl;
	
	return 0;
}

