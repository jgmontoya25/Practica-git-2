//Uso de libreria asistencia
//04-05-2026
//Gualberto Montoya

#include <iostream>
#include "asistencia.h"
#include <string>
    using namespace std;
        int main(){
            int totAlmns;
            int asistencia;
            float porcentaje;
            string clasificacion;
            cout<<"Por favor ingrese su total de alumnos: " <<"\n";
            cin>>totAlmns;
            asistencia = regisAsis(totAlmns);
            porcentaje = calcPorcentaje(asistencia, totAlmns);
            cout<<"Usted tiene un porcentaje de asistencia del: " <<porcentaje <<"\n";
            clasificacion = clasifcarAsis (porcentaje);
            cout<<"Su clasificacion es de: " << clasificacion <<"\n";
        }