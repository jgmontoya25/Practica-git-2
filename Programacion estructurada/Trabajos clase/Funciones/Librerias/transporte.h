//Libreria de transporte
//22-04-2026
//Gualberto Montoya

#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include <iostream>
#include <string>
    using namespace std;
        float calcGasto(int dias, float tarifa){
            float total = 0;
            for (int i = 0; i < dias; i++){
                total += tarifa;
            }
            return total;
        }
        string evaluarGasto(float total){
            if (total >= 200){
                return "Alto";
            }
            else {
                return "Moderado";
            }
        }
#endif