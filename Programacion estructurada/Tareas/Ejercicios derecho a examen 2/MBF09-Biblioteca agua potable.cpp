//Biblioteca de agua potable
//04-05-2026
//Gualberto Montoya

#include <iostream>
#include "agua.h"
#include <string>
    using namespace std;
        int main(){
            float total = 0.0;
            float consumo;
            int dias;
            string condicion;
            cout<<"Por favor ingrese sus dias de consumo \n";
            cin>>dias;
            consumo = registroConsumo (dias);
            total = calcCosto (consumo);
            condicion = evaluarConsumo (consumo);
            cout<<"Usted tiene un consumo de: " <<consumo <<" metros cubicos" <<"\n";
            cout<<"Usted tiene un costo de: $" <<total <<"\n";
            cout<<"Usted tiene una evaluacion de: " <<condicion <<"\n";
        }