//Uso de libreria calificaciones.h
//04-05-2026
//Gualberto Montoya

#include <iostream>
#include "calificaciones.h"
    using namespace std;
        int main(){
            int materias;
            double promedio;
            cout<<"Ingrese su cantidad de materias: ";
            cin>> materias;
            promedio = calProm (materias);
            cout<<"Por lo tanto tu promedio final es: " <<promedio <<"\n";
            cout<<"Asi que tu estatus es: " <<estatus(promedio) <<"\n";
            return 0; 
        }