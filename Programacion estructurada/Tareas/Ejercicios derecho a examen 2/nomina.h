//Libreria nomina
//04-05-2026
//Gualberto Montoya

#ifndef NOMINA_H
#define NOMINA_H
#include <iostream>
    using namespace std;
        float calcBono (float sueldoB){
            float bono;
            if (sueldoB < 15000){
                bono = sueldoB * 0.10;
                return bono;
            }
            else{
                bono = sueldoB * 0.05;
                return bono;
            }
        }
        float calcDesc(float sueldoB){
            return sueldoB * 0.05;
        }
        float calcSdoFin(float sueldoB, float bono, float descuento){
            return sueldoB + bono - descuento;
        }
#endif