#include <iostream>
#include "string"
using namespace std;
/* Danny Velásquez Cadenas*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int numero;
	cout<<"Ingrese un número"<<endl;
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
