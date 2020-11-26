#include <iostream>
#include "string"
using namespace std;
/* Danny Sinoé Velásquez Cadenas
/* Cree un arreglo de tamaño 10 tipo charm donde el usuario ingrese dichos caracteres, luego el sistema de dar una opcion de buscar 
un caracter en especifico y el programa debe confirmar si el carcter existe  o no en el arreglo.*/

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
    char arreglo[10];
    for(int i = 0; i < 10; i++){
        cout<<i+1<<") "<<"Ingrese un caracter: "<<endl;
        cin>>arreglo[i];
        cout<<endl;
    }
    
    for(int i = 0; i < 10; i++){
        cout<<"["<<arreglo[i]<<"]"<<endl;
    }
    char busqueda = ' ';
    cout<<"Que caracter quiere buscar en el arreglo: "<<endl;;
    cin>>busqueda;
    
    bool incluido = false;
    for(int i = 0; i < 10; i++){
        incluido = arreglo[i] == busqueda;
        if(incluido){
            break;
        }
    }
    cout<<(incluido?"Se encuentra":"No se encuentra")<<endl;
	return 0;
	return 0;
}
