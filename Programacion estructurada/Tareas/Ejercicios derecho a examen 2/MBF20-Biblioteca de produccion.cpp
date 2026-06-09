//Uso libreria produccion
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
#include "produccion.h"
    using namespace std;
        int main(){
            int dias;
            float total;
            float promedio;
            string clasificacion;
            cout<<"Bienvenido a tu sistema de produccion, para iniciar tu registro\n";
            cout<<"Ingresa tu numero de dias de produccion \n";
            cin>>dias;
            total = registrarProduccion (dias);
            promedio = calcPromDiario (total, dias);
            clasificacion = evaluarProduccion(total);
            cout<<"Total: " <<total <<"\n";
            cout<<"Promedio: " <<promedio <<"\n";
            cout<<"Clasificacion: " <<clasificacion <<"\n";
        }