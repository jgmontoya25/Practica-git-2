//Uso de libreria asistencia
//28-04-2026
//Gualberto Montoya

#include <iostream>
#include "asistencia.h"
#include <string>
    using namespace std;
        int main(){
            int totAlmns;
            int asistencia;
            string clasificacion;
            cout<<"Por favor ingrese su total de alumnos" <<"\n";
            cin>>totAlmns;
            asistencia = regisAsis(totAlmns);
            clasificacion = clasifcarAsis(asistencia, totAlmns);
            mostrarResumen(asistencia, totAlmns, clasificacion);
        }