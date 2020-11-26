#include <iostream>
#include "string"
using namespace std;
/* Danny Sinoé Velásquez Cadenas
/* Cree dos arreglos unidimensionales tamaño 5 de tipo entero, el primerarreglo debe llenarlo el usuario y el segundo 
arreglo debe de llenarse con el valor correspondiente al indice del primer arreglo multiplicado por dos.*/

int main(int argc, char** argv) {
    int arreglo[5];
	int arreglo2[5];
		
    for(int i = 0; i < 5; i++){
        cout<<i+1<<") "<<"Ingrese un número: "<<endl;
        cin>>arreglo[i];
        cout<<endl;
    }
    
    cout<<"Arreglo 1: Ingresado por el usuario"<<endl;
    
    for(int i = 0; i < 5; i++){
        cout<<"["<<arreglo[i]<<"]"<<endl;
    }
	
	cout<<"Arreglo 2: Valor arreglo multiplicado por 2"<<endl;
	
	for(int i = 0; i < 5; i++){
		arreglo2[i] = arreglo[i] * 2;
		cout<<"["<<arreglo2[i]<<"]"<<endl;
	}
	
	return 0;
}
