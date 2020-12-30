#include <string>
using namespace std;
#ifndef EMPLEADO_CPP
#define EMPLEADO_CPP

class Empleado{
    private:
        string nombre;
    int edad;

    public:
        Empleado(string pNombre, int pEdad){
            nombre = pNombre;
            edad = pEdad;
        }

    string getNombre(){
        return nombre;
    }

    int getEdad(){
        return edad;
    }

    void setNombre(string pNombre){
        nombre = pNombre;
    }

    void setEdad(int pEdad){
        edad = pEdad;
    }
};
#endif
