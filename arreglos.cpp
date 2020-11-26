#include <iostream>
#include "string"
using namespace std;
/* Danny Velásquez Cadenas*/

int main(int argc, char** argv) {
	
	//<tipo> nombreArreglo[int tamaño]
	int numeros[10]
	//Inicializa valores
	int numeros1[10]={1,2,3,4,5,6,7,8,9,10};
	//asignar valores
	for(int i=0;i<10;i++){
		numeros[i]=0;
	}
	
	//imprimir de forma individual
	cout<<"Ingese el indice del valor que desea imprimir"
	cin>>b;
	cout<<numeros1[b];<<endl;
	
	for(int i=0;i<10;i++){
		cout<<"numeros["<<numeros[i]<<"]="<<endl;
	}
	
	

	return 0;
}


/*
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
