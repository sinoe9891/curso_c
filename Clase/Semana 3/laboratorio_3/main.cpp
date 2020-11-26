#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
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
}
