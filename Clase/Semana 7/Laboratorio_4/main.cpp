#include <iostream>
#include "string"
using namespace std;
/* Danny Sinoé Velásquez Cadenas
/* Cree un programa CALCULADORA para tres variables tipo float tipo con las siguientes caracteristicas: */

//Proc. sin parametros con retorno
double suma_spcr();

//Proc. con parametros con retorno
double resta(double n1, double n2, double n3);

//Proc. sin parametros sin retorno
void multiplicacion();

//Proc. con parametros sin retorno
void division(double n1, double n2, double n3);

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int menu;
		cout<<"Selecciones la operación"<<endl;
		cout<<"1-Suma"<<endl;
		cout<<"2-Resta"<<endl;
		cout<<"3-Multiplicación"<<endl;
		cout<<"4-División"<<endl;
		cin>>menu;
		double a, b, c, resultado;
		switch(menu){
			case 1:
			    cout<<"***** Suma *****"<<endl;                                
				resultado=suma_spcr();
				cout<<"La suma es: "<<resultado<<endl;
				break;
			case 2:
				cout<<"***** Resta *****"<<endl;
				cout<<"Ingrese el primero numero"<<endl;
				cin>>a;
				cout<<"Ingrese el segundo numero"<<endl;
				cin>>b;
				cout<<"Ingrese el tercer numero"<<endl;
				cin>>c;
				resultado = resta(a,b,c);
				cout<<"La resta es: "<<resultado<<endl;
				break;
			case 3:
				cout<<"***** Multiplicación *****"<<endl;
				multiplicacion();
				break;
			case 4:
				cout<<"Ingrese el primero numero"<<endl;
				cin>>a;
				cout<<"Ingrese el segundo numero"<<endl;
				cin>>b;
				cout<<"Ingrese el tercer numero"<<endl;
				cin>>c;
				division(a,b,c);
				break;
			default:
				cout<<"Ingrese un valor correcto"<<endl;
	return 0;
	}
}

double suma_spcr(){
	double n1,n2, n3;
	cout<<"Ingrese el primero numero"<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>n2;
	cout<<"Ingrese el tercer numero"<<endl;
	cin>>n3;
	double suma=n1+n2+n3;
	return suma;
}


double resta(double n1, double n2, double n3){
	return ((n1-n2)-n3);
}

void multiplicacion(){                  
	double n1,n2,n3;
	cout<<"Ingrese el primero numero"<<endl;
	cin>>n1;
	cout<<"Ingrese el segundo numero"<<endl;
	cin>>n2;
	cout<<"Ingrese el tercer numero"<<endl;
	cin>>n3;
	cout<<"La multiplicación es: "<<(n1*n2)*n3<<endl;
}


void division(double n1, double n2, double n3){
	double division = (n1/n2)/n3;
	cout<<"La División es:"<<division<<endl;
}


