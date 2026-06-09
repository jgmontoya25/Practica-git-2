//Nomina
//04-05-2026
//Gualberto Montoya

#include <iostream>
#include "nomina.h"
    using namespace std;
        int main(){
            float bono;
            float descuento;
            float sueldoBase;
            cout<<"Para saber su sueldo neto" <<"\n";
            cout<<"Ingrese su sueldo base: " <<"\n";
            cin>>sueldoBase;
            bono = calcBono(sueldoBase);
            descuento = calcDesc(sueldoBase);
            cout<<"Usted tiene un ahorro a bono de: " << bono <<"\n";
            cout<<"Usted tiene un descuento de: " << descuento <<"\n";
            cout<<"Su sueldo final seria: " <<calcSdoFin(sueldoBase,bono,descuento) <<"\n";
            return 0;
        }