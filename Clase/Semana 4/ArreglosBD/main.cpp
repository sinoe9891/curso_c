#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int t1,t2;
	cout<<"Ingrese el tamanio 1 del arreglo"<<endl;
	cin>>t1;
	cout<<"Ingrese el tamanio 2 del arreglo"<<endl;
	cin>>t2;
	int m[t1][t2];
	//inicializa arreglo
	for(int i=0;i<t1;i++){
		for(int j=0;j<t2;j++){
			m[i][j]=-99;
		}
	}
	while(true){
		int repite;
		cout<<"Que desea realizar?"<<endl;
		cout<<"1- Ingresar valores"<<endl;
		cout<<"2- Imprimir"<<endl;
		cout<<"3- Buscar valores"<<endl;
		cout<<"4- Eliminar valores"<<endl;
		cout<<"5- Salir"<<endl;
		cin>>repite;
		if(repite==1){
		//ingresar valores
		int valor;
		cout<<"Ingrese un valor para el arreglo"<<endl;
		cin>>valor;
		for(int i=0;i<t1;i++){
			for(int j=0;j<t2;j++){
			    if(m[i][j]==-99){
			    	m[i][j]=valor;
			    	i=t1;
			    	j=t2;
				}	
			}
		}
			//imprimir
		for(int i=0;i<t1;i++){
			for(int j=0;j<t2;j++){
				if(m[i][j]!=-99){
					cout<<m[i][j]<<"|";
				}else{
					cout<<" "<<"|";
				}
			}
			cout<<endl;
		}
			
			
			
		}else if(repite==2){
			//imprimir
		for(int i=0;i<t1;i++){
			for(int j=0;j<t2;j++){
				if(m[i][j]!=-99){
					cout<<m[i][j]<<"|";
				}else{
					cout<<" "<<"|";
				}
			}
			cout<<endl;
		}
			
			
		}else if(repite==3){
			//Buscar
			int b;
			int c=0;
			cout<<"Ingrese el valor a buscar"<<endl;
			cin>>b;
			for(int i=0;i<t1;i++){
				for(int j=0;j<t2;j++){
					if(m[i][j]==b){
						cout<<"El valor "<<b<<" Si existe dentro del arreglo"<<endl;
					}else{
						c++;
					}
					
				}
			}
			if(c==(t1*t2)){
				cout<<"El valor "<<b<<" NO existe dentro del arreglo"<<endl;
			}
		}else if(repite==4){
			//Buscar
			int b;
			int c=0;
			cout<<"Ingrese el valor a buscar"<<endl;
			cin>>b;
			for(int i=0;i<t1;i++){
				for(int j=0;j<t2;j++){
					if(m[i][j]==b){
						m[i][j]=-99;
						cout<<"El valor "<<b<<" fue eliminado!!"<<endl;
					}else{
						c++;
					}
					
				}
			}
			if(c==(t1*t2)){
				cout<<"El valor "<<b<<" No fue eliminado ya que no existe!!"<<endl;
			}
		}else{
			return 0;
		}

	}
	return 0;
}
