#include <iostream>

using namespace std;

int contador(int a,int b);
int menu(int m);
int main(int argc, char** argv) {
	int x=menu(0);
	
	return 45345;
}

int contador(int a,int b){
	cout<<a<<endl;
	a++;//a=a+1
	if(a>b){
		return a;
	}
	return contador(a,b);
}

int menu(int m){
	cout<<"Que desea realizar"<<endl;
	cout<<"1- Imprime hola"<<endl;
	cout<<"2- Imprime adios"<<endl;
	cout<<"3- Salir"<<endl;
	cin>>m;
	switch(m){
		case 1: cout<<"Hola"<<endl;
				return menu(0);
				break;
		case 2: cout<<"Adios"<<endl;
				return menu(0);
				break;
		case 3: return 21;
				break;
		
		default:
			cout<<"Ingrese un valor correcto"<<endl;
	}
	return 3;
}
