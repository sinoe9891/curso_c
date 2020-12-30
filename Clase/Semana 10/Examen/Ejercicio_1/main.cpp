#include <iostream>
#include <fstream>
#include <string>
#include "Empleado.cpp"

using namespace std;
/* Danny Velásquez Cadenas
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
Empleado * empleado;
void agregarEmpleado();
void escribirArchivo();

int main(int argc, char ** argv){
    setlocale(LC_CTYPE, "Spanish");
    char opcion;
    do{
        cout<<"*** MENÚ ***"<<endl;
        cout<<"1. Agregar empleado"<<endl;
        cout<<"2. Imprimir nombre de empleado"<<endl;
        cout<<"3. Imprimir edad de empleado"<<endl;
        cout<<"4. Guardar nombre de empleado en archivo"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<""<<endl;
        cout<<"Seleccione una opción:"<<endl;
        cin >> opcion;
        switch (opcion){
        case '1':
            agregarEmpleado();
            break;
        case '2':
            if (empleado){
                cout<<"El nombre del empleado es: " + empleado -> getNombre()<<endl;
            } else{
                cout<<"No se ha agregado un empleado"<<endl;
            }
            break;
        case '3':
            if (empleado){
                cout<<"La edad del empleado es: ";
                cout<<empleado -> getEdad()<<endl;
            } else{
                cout<<"No se ha agregado un empleado"<<endl;
            }
            break;
        case '4':
            escribirArchivo();
            break;
        case '5':
            cout<<"Adiós"<<endl;
            break;
        default:
            cout<<"Ingrese la opción correcta!"<<endl;
            break;
        }
    } while (opcion != '5');
    return 0;
}

void agregarEmpleado(){
    string nombre;
    int edad;
    cout<<"Ingresar nombre del empleado"<<endl;
    cin >> nombre;
    cout<<"Ingresar edad del empleado"<<endl;
    cin >> edad;
    empleado = new Empleado(nombre, edad);
}

void escribirArchivo(){
    if (empleado){
        ofstream fs("archivo.txt");
        fs << empleado -> getNombre()<<endl;
        fs.close();
        cout<<"Se ha creado el archivo"<<endl;
    } else{
        cout<<"No se ha agregado un empleado"<<endl;
    }
}
