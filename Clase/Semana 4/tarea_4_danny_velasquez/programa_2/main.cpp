#include <iostream>
#include "string"
using namespace std;
/* Danny Sino� Vel�squez Cadenas
/* Realice un programa donde el ususrio ingrese 10 n�meros entero, luego el programa determine y 
muestro lo siguiente: N�meros mnenores a 20 y a 0, y mayores a 300*/

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int arreglo[10];
	int aux;
	
    for(int i = 0; i < 10; i++){
        cout<<i+1<<") "<<"Ingrese un n�mero entero: "<<endl;
        cin>>arreglo[i];
        cout<<endl;
    }
    
    cout<<"Arreglo Ingresado"<<endl;
    
    for(int i = 0; i < 10; i++){
        cout<<"["<<arreglo[i]<<"]"<<endl;
    }
	
	
	cout<<"N�meros menores que 20"<<endl;
	for(int i = 0; i < 10; i++){
			if(arreglo[i]<20 && arreglo[i]>0){
				cout<<"["<<arreglo[i]<<"]"<<endl;
				
			}
	}
	
	cout<<"N�meros mayores que 300"<<endl;
	for(int i = 0; i < 10; i++){
			if(arreglo[i]>300){
				cout<<"["<<arreglo[i]<<"]"<<endl;
				
			}
	}
	
	cout<<"N�meros menores que 0"<<endl;
	for(int i = 0; i < 10; i++){
			if(arreglo[i]<0){
				cout<<"["<<arreglo[i]<<"]"<<endl;
				
			}
	}

	return 0;
}
