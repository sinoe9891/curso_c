#include <iostream>
#include <cstdlib>
using namespace std;
/*Danny Sino� Vel�squez*/
/* Cree un arreglo unidimensional tama�o 10 y llene dicho arreglo con numeros aleatorios entre 90 y 150. */

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Spanish");
	
	int arreglo[10];
	int counter;
	
	for (int i = 0; i < 10; i++){
		arreglo[i] = 90 + rand() % (150);
	}
	
	for (int i = 0; i < 10; i++){
		counter++;
		cout<<"["<<counter <<"] "<<arreglo[i]<<endl;
	}
	
	return 0;
}
