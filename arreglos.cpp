#include <iostream>
#include "string"
using namespace std;
/* Danny Vel�squez Cadenas*/

int main(int argc, char** argv) {
	
	//<tipo> nombreArreglo[int tama�o]
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
