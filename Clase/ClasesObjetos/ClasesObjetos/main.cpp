#include <iostream>
#include "Churro.cpp"
#include "Persona.cpp"

using namespace std;

Persona p[3];
//Churro c[3];

void IngresaPersonas();
void ImprimirPersonas();
void ImprimirPersonasMayor60();
void ImprimirPersonasMenor18();


int main(int argc, char** argv) {
	while(true){
		int menu;
	cout<<"1- Ingrese Personas"<<endl;
	cout<<"2- Imprime Personas"<<endl;
	cout<<"3- Imprime Personas con edad mayor a 60"<<endl;
	cout<<"4- Imprime Personas con edad menor a 18"<<endl;
	cout<<"5- Salir"<<endl;
	cin>>menu;
	switch(menu){
		case 1:IngresaPersonas();
			break;
		case 2:ImprimirPersonas();
			break;
		case 3:ImprimirPersonasMayor60();
			break;
		case 4:ImprimirPersonasMenor18();
			break;
		case 5: return 0;
		default:
			cout<<"Ingrese un valor correcto"<<endl;
		}
	}
	
	
	return 0;
}

void IngresaPersonas(){
	string n,c;
	int e;
	for(int i=0;i<3;i++){
		cout<<"Ingrese el nombre"<<endl;
		cin>>n;
		cout<<"Ingrese el edad"<<endl;
		cin>>e;
		cout<<"Ingrese el correo"<<endl;
		cin>>c;
		p[i].setNombre(n);
		p[i].setEdad(e);
		p[i].setCorreo(c);
	}
}

void ImprimirPersonas(){
	for(int i=0;i<3;i++){
		cout<<p[i].getNombre()<<endl;
		cout<<p[i].getEdad()<<endl;
		cout<<p[i].getCorreo()<<endl;
		cout<<"-------------------"<<endl;
	}
}

void ImprimirPersonasMayor60(){
	for(int i=0;i<3;i++){
	  if(p[i].getEdad()>60){
	  	cout<<p[i].getNombre()<<endl;
	  }
	}
}

void ImprimirPersonasMenor18(){
	for(int i=0;i<3;i++){
	  if(p[i].getEdad()<10){
	  	cout<<p[i].getNombre()<<endl;
	  }
	}
}
