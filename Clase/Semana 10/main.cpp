#include <iostream>

using namespace std;

//Con retorno sin paramentros
int suma();
//Con retorno con paramentros
int resta(int a, int b);
//sin retorno sin paramentros
void multiplicacion();
//sin retorno con parametros
void divide(int a, int b);
//Recursividad
int cuentaNumeroR(int a, int b);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	int menu;
	int a, b;
	while(true){
	cout<<"Sleccione lo que dese arealizar"<<endl;
	cout<<"1-Suma"<<endl;
	cout<<"2-Resta"<<endl;
	cout<<"3-Multiplica"<<endl;
	cout<<"4-División"<<endl;	
	cout<<"5-Salir"<<endl;	
	cin>>menu;
	switch(menu){
		case 1:
			cout<<"La suma es: "<<suma<<endl;
			break;
		case 2:
			cout<<"Ingrese el numero a"<<endl;
			cin>>a;
			cout<<"Ingrese el numero b"<<endl;
			cin>>b;
			cout<<"La resta es: "<<resta(a,b)<<endl;
			break;
		case 3:
			multiplicacion();
			break;
		case 4:
			cout<<"Ingrese el numero a"<<endl;
			cin>>a;
			cout<<"Ingrese el numero b"<<endl;
			cin>>b;
			divide(a,b);
			break;
		case 5:
			cout<<"Ingrese el numero menor"<<endl;
			cin>>a;
			cout<<"Ingrese el numero mayor"<<endl;
			cin>>b;
			cuentaNumeroR(a,b);
			break;
		case 6:
			return 0;
			break;
		default:
			cout<<"Ingrese un valor correcto"<<endl;
		}
	}

	return 0;
}

int suma(){
	int a,b;
	cout<<"Ingrese el numero a"<<endl;
	cin>>a;
	cout<<"Ingrese el numero b"<<endl;
	cin>>b;
	return a + b;
}

int resta(int a, int b){
	return a-b;
}

void multiplicacion(){
	int a,b;
	cout<<"Ingrese el numero a"<<endl;
	cin>>a;
	cout<<"Ingrese el numero b"<<endl;
	cin>>b;
	cout<<"La multiplicacion es:"<<a*b<<endl;
}

void divide(int a, int b){
	cout<<"La division es:"<<a/b<<endl;
}

//Recursividad
int cuentaNumeroR(int a, int b){
	int c = a+1;
	if(c>b){
		cout<<c<<endl;
		return cuentaNumeroR(c,b);
	}	
	return 0;
}
