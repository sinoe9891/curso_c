#include <iostream>
#include "string"
using namespace std;
/* Danny Sinoé Velásquez Cadenas
/* Cree un arreglo bidimiensional de tipo entero de 3 * 3 donde el ususrio ingrese 
los 9 valores, luego el program obtenga la suma de la diagonal de la matriz*/
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int t1 = 3;
	int t2 = 3;
	int contador = 0;
	int suma = 0;
	int m[t1][t2];
	//inicializa arreglo
	for(int i=0;i<t1;i++){
		for(int j=0;j<t2;j++){
			m[i][j]=-99;
		}
	}
	
	while(contador<(t1*t2)){
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
		contador++;
		
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
		
	}
	
	//Sumar
	for(int i=0;i<t1;i++){
		for(int j=0;j<t2;j++){
			if( i + j == t1-1){
				/*if( i == j){ (Lo dejo porque esta es la suma de la primera diagonal)*/
				suma = suma + m[i][j];
			}
		}
		cout<<endl;
	}
	
	cout<<"La suma en diagonal es: " << suma <<endl;

	return 0;
}
