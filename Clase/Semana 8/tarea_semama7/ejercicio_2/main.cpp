#include <iostream>
#include "string"
using namespace std;

/* Danny Velásquez Cadenas
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double converAdolares(double);
double converAlempiras(double);

int main(int argc, char** argv) {
	
	setlocale(LC_CTYPE, "Spanish");
	
	int opcion;
	double cantidad;
	
	while(true){
		cout<<"Seleccione una Opción"<<endl;
		cout<<"1. Convertir de Lempiras a Dolares"<<endl;
		cout<<"2. Convertir de Dolares a Lempiras"<<endl;
		cout<<"3. Salir"<<endl;
		
		cin>>opcion;
		
		if(opcion==1 || opcion==2){
			cout<<"Ingrese la cantidad a convertir"<<endl;
			cin>>cantidad;
		}
		
		switch(opcion){
			case 1:
				cout<<"La conversión de Lempiras a Dolares es: $"<<converAdolares(cantidad)<<endl;
				break;
			case 2:
				cout<<"La cantida de Dolares a Lempiras es: L."<<converAlempiras(cantidad)<<endl;
				break;
			case 3:
				return 0;
				break;
			default:
				cout<<"Opcion incorrecta, intente de nuevo"<<endl;
				break;
		}
		
		system("pause");
		system("cls");
	}
	
	return 0;
}

double converAdolares(double lempira){
	return lempira/24.40;
}

double converAlempiras(double dolar){
	return dolar*24.40;
}
