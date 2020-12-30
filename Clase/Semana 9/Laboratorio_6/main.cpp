#include <iostream>
#include <string>
#include "Alumno.cpp"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void agregarAlumno();
void imprimirNombres();
void imprimirAprovados();
void imprimirReprovados();
Alumno * alumnos[4];

int main(int argc, char const * argv[]){
    setlocale(LC_CTYPE, "Spanish");

    char opcion;
    do{
        cout<<"*** MENÚ ***"<<endl;
        cout<<"1. Ingresar Alumno"<<endl;
        cout<<"2. Imprimir solamente Nombre Alumnos"<<endl;
        cout<<"3. Imprimir alumnos con nota mayor o igual a 60"<<endl;
        cout<<"4. Imprimir alumnos con nota menor a 60"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<""<<endl;
        cout<<"Seleccione una opción:"<<endl;
        cin >> opcion;
        switch (opcion){
        case '1':
            agregarAlumno();
            break;
        case '2':
            imprimirNombres();
            break;
        case '3':
            imprimirAprovados();
            break;
        case '4':
            imprimirReprovados();
            break;
        case '5':
            cout<<"Tenga un buen día"<<endl;
            break;
        default:
            cout<<"Ingrese un valor correcto"<<endl;
            break;
        }
    } while (opcion != '5');
    return 0;
}

void agregarAlumno(){
    string nombre;
    int cuenta;
    double nota;
    cout<<"Ingresar nombre del alumno"<<endl;
    cin >> nombre;
    cout<<"Ingresar número de cuenta del alumno"<<endl;
    cin >> cuenta;
    cout<<"Ingresar nota del alumno"<<endl;
    cin >> nota;

    for (int i = 0; i < 4; i++){
        if (!alumnos[i]){
            alumnos[i] = new Alumno(nombre, cuenta, nota);
            break;
        }
    }
    cout<<"Alumno agregado"<<endl;
}

void imprimirNombres(){
    cout<<"La lista de alumnos es la siguiente:"<<endl;
    for (int i = 0; i < 4; i++){
        if (alumnos[i]){
            cout<<alumnos[i] -> getNombre()<<endl;
            cout<<""<<endl;
        }
    }
}

void imprimirAprovados(){
    cout<<"Los alumnos con nota mayor o igual a 60 son los siguientes:"<<endl;
    for (int i = 0; i < 4; i++){
        if (alumnos[i]){
            if (alumnos[i] -> getNota() >= 60.0){
                cout<<alumnos[i] -> getNombre() + "\n";
                cout<<""<<endl;
            }
        }
    }
}

void imprimirReprovados(){
    cout<<"Los alumnos con nota menor a 60 son los siguientes:"<<endl;
    for (int i = 0; i < 4; i++){
        if (alumnos[i]){
            if (alumnos[i] -> getNota() < 60.0){
                cout<<alumnos[i] -> getNombre()<<endl;
                cout<<""<<endl;
            }
        }
    }
}
