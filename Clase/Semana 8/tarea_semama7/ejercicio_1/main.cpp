#include <iostream>
#include "string"
using namespace std;

/* Danny Vel�squez Cadenas
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
string printHola();
void printAdios();

int main(int argc, char ** argv) {
	setlocale(LC_CTYPE, "Spanish");

	int opcion;
	
	while(true){
		cout<<"Seleccione una opci�n:"<<endl;
		cout<<"1.-Imprimir Hola"<<endl;
		cout<<"2.-Imprimir Adi�s"<<endl;
		cout<<"3.-Salir"<<endl;
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Ud Seleccion�:"<<endl;
				cout<<printHola()<<endl;
				break;
			case 2:
				cout<<"Ud Seleccion�:"<<endl;
				printAdios();
				break;
			case 3:
				return 0;
				break;
			default:
				cout<<"El dato ingresado no est� disponible, intente de nuevo, por favor"<<endl;
				break;
		}
		
		system("pause");
		system("cls");
		
	}
	return 0;
}

string printHola(){
	string hola="Hola";
	return hola;
}

void printAdios(){
	string adios="Adi�s";
	cout<<adios<<endl;
}
