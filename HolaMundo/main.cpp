#include <iostream>

using namespace std;

int main()
{
    cout << "          . " << endl;
    cout << " .>   )\;`a__" << endl;
    cout << "(  _ _)/ /-. ~~" << endl;
    cout << " `( )_ )/" << endl;
    cout << "  <_  <_" << endl;

    cout << 10 << endl;
    cout << 3.1416f;
    cout << true << endl;
    cout << 'c' << endl;

    cout << "Hola Platzi" << endl;

//  Alojando Variables
    int month = 12;
    int day = 4;

    day = month;

    cout << month << endl;
    cout << day << endl;

    float pi = 3.1416;

    cout << pi << endl;

    bool isGameOver = false;

    cout << "El jugador ya perdio" + isGameOver<< endl;
//Operadores
	int valorA = 2;
	int valorB = 2;
	
	
	cout << valorA + valorB << endl;
	
	valorA = valorB - 100;
	
	cout << valorA << endl;
	
	valorA = 10;
	cout << valorA % 2 << endl;
	
	float minCord = -.9835;
	float maxCord = minCord * 2;
	
	cout << maxCord << endl;
	
	maxCord = maxCord * -1;
	
	cout << maxCord << endl;
	
	
// Ejemplo vidas
	
	int vidas = 3;
	
	cout << vidas << endl;
	
	vidas = vidas - 1;
	
	cout << vidas << endl;
	
	vidas = vidas - 1;
	
	cout << vidas << endl;
	
	vidas = vidas - 1;
	
	cout << vidas << endl;
	
	vidas = vidas - 1;
	
	
//Apuntadores
	int direccion = 3509;
	
	int* apuntadorDireccion;
	
	apuntadorDireccion = &direccion;
	
	cout << apuntadorDireccion << endl;
	
	cout << direccion << endl;  
	
	
    return 0;
}
