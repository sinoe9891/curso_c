#include <iostream>
#include "string"
using namespace std;
/* Danny Vel�squez Cadenas*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numero;
	cout<<"Ingrese un n�mero"<<endl;
	cin>> numero;
/*	//If simple
	if(numero>10){
		cout<<"El n\xA3mero es mayor a 10"<<endl;
	}	
	
	if(numero>10 && numero<20){
		cout<<"El n\xA3mero es mayor a 10"<<endl;
	}
	
	//If Compuesto
	if(numero>10){
		cout<<"El n\xA3mero es mayor a 10"<<endl;
	}else{
		cout<<"El n\xA3mero es menor a 10"<<endl;		
	}
	
	//If Anidado
	if(numero>10){
		if(numero>20){
			cout<<"El n\xA3mero es mayor a 10"<<endl;
	    }else{
			cout<<"El n\xA3mero es mayor a 10 y menor que 20"<<endl;		
	    }
	}else{
		cout<<"El n\xA3mero no es mayor a 10"<<endl;
	}
*/	
	//Switch
	switch(numero){
		case 1 : cout<<"El n\xA3mero ingresado es uno"<<endl;
			break;
		case 10 : cout<<"El n\xA3mero ingresado es diez"<<endl;
			break;
		case 90 : cout<<"El n\xA3mero ingresado es noventa"<<endl;
			break;
		default : cout<<"El n\xA3mero ingresado no es: 1, 10 o 90"<<endl;
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
