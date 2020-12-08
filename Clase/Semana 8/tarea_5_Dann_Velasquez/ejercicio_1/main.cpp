#include <iostream>
using namespace std;
/*Danny Sinoé Velásquez
/* Cree un programa que contenga un procedimiento recursivo que imprima los numeros pares del 0 al 1000. */

int contador(int a);

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");

	int c = contador(0);
	cout<<c<<endl;
	return 0;
}

int contador(int a){
	if(a<=1000){
		if(a%2==0){	
			cout<<a<<endl;
		}
	return contador(a);
	}
	
	return a;
}
