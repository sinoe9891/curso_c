#include <iostream>
#include <cstdlib>
using namespace std;
/* Danny Sino� Vel�squez */
/* Cree un programa donde el usuario indique el limite inferior y limite superior y luego imprima un numero aleatorio entre esos dos numeros enteros. */

int main(int argc, char ** argv) {
    setlocale(LC_CTYPE, "Spanish");

    int numAleatorio, limitInferior, limitSuperior;

    cout<<"Generaci�n de n�mero aleatorio"<<endl;
    cout<<endl;
    cout<<"Ingrese un n�mero para el limite inferior"<<endl;
    cin>>limitInferior;
    cout<<"Ingrese un n�mero para el el limite superior"<<endl;
    cin>>limitSuperior;

    numAleatorio = limitInferior + (rand() % (limitSuperior + 1 - limitInferior));
    cout<<"el numero aleatorio es: " <<numAleatorio<<endl;

    return 0;
}
