#include <iostream>
#include "string"
#include <fstream>

using namespace std;
/* Danny Velásquez Cadenas
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int menu();
string escribirArchivos();
string llenarNombres();
string leerArchivos();
string arreglo[10];

int main(int argc, char ** argv) {
    setlocale(LC_CTYPE, "Spanish");

    int inicio = menu();

    return 0;
}

int menu() {
    int opcion;
    cout << "Selecciones la operación" << endl;
    cout << "1-Llenar Nombres" << endl;
    cout << "2-Escribir archivos con nombres" << endl;
    cout << "3-Leer archivo con nombres" << endl;
    cout << "4-Salir" << endl;
    cin >> opcion;

    switch (opcion) {
	    case 1:
	        llenarNombres();
	        system("pause");
	        system("cls");
	        return menu();
	        break;
	    case 2:
	        escribirArchivos();
	        system("pause");
	        system("cls");
	        return menu();
	        break;
	    case 3:
	        leerArchivos();
	        system("pause");
	        system("cls");
	        return menu();
	        break;
	    case 4:
	        exit(0);
	        break;
	    default:
	        cout << "Ingrese un valor correcto" << endl;
	        return menu();
	        break;
    }
}

/*Llenado de archivos*/
string llenarNombres() {
    getline(cin, arreglo[0]);
    cout << "Escribir 10 nombres" << endl;
    for (int i = 0; i < 10; i++) {
        cout << i + 1 << ") " << "Ingrese Nombre: " << endl;
        getline(cin, arreglo[i]);
        cout << endl;
    }

}

/*Escritura de archivos*/
string escribirArchivos() {
    ofstream fs("tarea.txt");
    for (int i = 0; i < 10; i++) {
        fs << arreglo[i] << endl;
    }
    fs.close();
    cout << "Se ha creado el archivo" << endl;
    menu();
}

/*Lectura de archivo*/
string leerArchivos() {
    string cadena;
    cout << "Contenido del archivo es:" << endl;
    ifstream fe("tarea.txt");
    while (getline(fe, cadena)) {
        cout << cadena << endl;
    }
}
