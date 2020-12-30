#include <string>
#ifndef ALUMNO_CPP
#define ALUMNO_CPP
using namespace std;

class Alumno{
    private:
        string nombre;
    int cuenta;
    double nota;

    public:
        Alumno(string pNombre, int pCuenta, double pNota){
            nombre = pNombre;
            cuenta = pCuenta;
            nota = pNota;
        }

    string getNombre(){
        return nombre;
    };

    int getCuenta(){
        return cuenta;
    }

    double getNota(){
        return nota;
    }

    void setNombre(string pNombre){
        nombre = pNombre;
    };

    void setCuenta(int pCuenta){
        cuenta = pCuenta;
    };

    void setNota(double pNota){
        nota = pNota;
    };
};

#endif
