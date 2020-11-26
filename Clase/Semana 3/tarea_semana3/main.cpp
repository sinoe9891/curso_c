#include <iostream>
using namespace std;
/* Danny Sinoé Velásquez Cadenas*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int arreglo[5];
	int arreglo2[5];
	int arreglo3[10];	
    for(int i = 0; i < 5; i++){
        cout<<i+1<<") "<<"Ingrese un número: "<<endl;
        cin>>arreglo[i];
        cout<<endl;
    }
    
    cout<<"Arreglo 1"<<endl;
    
    for(int i = 0; i < 5; i++){
        cout<<"["<<arreglo[i]<<"]"<<endl;
    }
	
	cout<<"Arreglo 2"<<endl;
	
	for(int i = 0; i < 5; i++){
		arreglo2[i] = arreglo[i] * 2;
		cout<<"["<<arreglo2[i]<<"]"<<endl;
	}
	
	return 0;
}
