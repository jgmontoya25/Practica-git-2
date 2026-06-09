//Nomina
//17-04-2026
//Gualberto Montoya

#ifndef NOMINA_H
#define NOMINA_H
#include <iostream>
    using namespace std;
        float calcBono (float sueldoB){
            return sueldoB * 0.10;
        }
        float calcDesc(float sueldoB){
            return sueldoB * 0.05;
        }
        float calcSdoFin(float sueldoB, float bono, float descuento){
            return sueldoB - (bono + descuento);
        }
#endif