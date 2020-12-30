#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
/* Danny Velásquez Cadenas
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
  setlocale(LC_CTYPE, "Spanish");
  srand(time(NULL));
  int num1 = 1 + rand() % 10;;
  int num2 = 1 + rand() % 10;;
  int array[num1][num2];
  for (int i = 0; i < num1; i++) {
    for (int j = 0; j < num2; j++) {
      array[i][j] = -1;
    }
  }
  cout<<"El arregle bidimensional es de tamaño: "<<num1<<"x"<<num2<<endl;
  char opcion;
  do {
    cout<<"*** MENÚ ***"<<endl;
    cout<<"1. Ingresar valores"<<endl;
    cout<<"2. Imprimir valores"<<endl;
    cout<<"3. Asignar -1 a todas las posiciones"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Seleccione una opción:"<<endl;
    cin >> opcion;
    switch (opcion) {
    case '1':
      for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
          int num;
          cout<<"Ingrese número para ("<<i<<", "<<j<<"):"<<endl;
          cin >> num;
          array[i][j] = num;
        }
      }
      break;
    case '2':
      for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
          cout<<"["<<array[i][j]<<"]";
        }
        cout<<endl;
      }
      break;
    case '3':
      for (int i = 0; i < num1; i++) {
        for (int j = 0; j < num2; j++) {
          array[i][j] = -1;
        }
      }
      break;
    case '4':
      cout<<"Adiós"<<endl;
      break;
    default:
      cout<<"Ingrese la opcion correcta!"<<endl;
      break;
    }
  } while (opcion != '4');
  return 0;
}
