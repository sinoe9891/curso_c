#include <iostream>
using namespace std;
/*
Danny Velásquez Cadenas
Fecha: 20/11/2020
Cree un programa con las siguientes caracteristicas:

Cree un arreglo unidimensional de tamaño 4 tipo string.
Cree un arreglo bidimensional de tamaño 2 x 2 de tipo string.
Solicite al usuario ingresar valores para llenar el arreglo unidimensional.
Asigne los valores ingresados al arreglo unidimensional al arreglo bidimensional.
Imprima ambos arreglos.*/

int main(int argc, char** argv) {
	string arreglo[4];
    string mat[2][2];

	for(int i = 0; i < 4; i++){
		cout<<"Ingrese la palabra "<<i+1<<": ";
		cin>>arreglo[i];
	}
	
	cout<<endl;
	for(int i = 0; i < 4; i++){
		cout<<"["<<i<<"]";
		cout<<"[" << arreglo[i]<<"]"<<endl;
	}
	
	cout<<endl;
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
		  mat[i][j] = arreglo[j+(i==0?0:2)];
		}
	}
	cout<<endl;
	for(int i = 0; i < 2; i++){
		cout<<"["<<i<<"]";
		for(int j = 0; j < 2; j++){
			cout<<"["<< mat[i][j]<<"]";
		}
	cout<<endl;
	}
	return 0;
}