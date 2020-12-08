#include <iostream>
#include <cstdlib>
using namespace std;
/* Danny Sinoé Velásquez */
/* Cree un programa donde el usuario indique el limite inferior y limite superior y luego imprima un numero aleatorio entre esos dos numeros enteros. */

int main(int argc, char ** argv) {
    setlocale(LC_CTYPE, "Spanish");

    int numAleatorio, limitInferior, limitSuperior;

    cout<<"Generación de número aleatorio"<<endl;
    cout<<endl;
    cout<<"Ingrese un número para el limite inferior"<<endl;
    cin>>limitInferior;
    cout<<"Ingrese un número para el el limite superior"<<endl;
    cin>>limitSuperior;

    numAleatorio = limitInferior + (rand() % (limitSuperior + 1 - limitInferior));
    cout<<"el numero aleatorio es: " <<numAleatorio<<endl;

    return 0;
}
