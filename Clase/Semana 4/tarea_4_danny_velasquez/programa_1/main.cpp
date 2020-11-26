#include <iostream>
#include "string"
using namespace std;
/* Danny Sinoé Velásquez Cadenas
/* Escriba un programa que lea 5 npumeros enteros y los guarde en un arreglo unidimensional, luego mostrará los valores ordenados
/* Muestre el arreglo antes y después del ordenamiento.*/

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int arreglo[5];
	int aux;
	
    for(int i = 0; i < 5; i++){
        cout<<i+1<<") "<<"Ingrese un número entero: "<<endl;
        cin>>arreglo[i];
        cout<<endl;
    }
    
    cout<<"Arreglo Ingresado"<<endl;
    
    for(int i = 0; i < 5; i++){
        cout<<"["<<arreglo[i]<<"]"<<endl;
    }
	
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	
	cout<<"Arreglo Ordenado de Menor a Mayor"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"["<<arreglo[i]<<"]"<<endl;
	}
	

	return 0;
}
