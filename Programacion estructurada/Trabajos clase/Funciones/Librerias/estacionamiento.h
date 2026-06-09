//Libreria de estacionamiento
//23-04-2026
//Gualberto Montoya

#ifndef ESTACIONAMIENTO_H
#define ESTACIONAMIENTO_H
#include <iostream>
    using namespace std;
        float obtTarifa(int opc){
            float tarifa;
            switch (opc)
            {
            case 1:
                tarifa = 10;
                break;
            case 2:
                tarifa = 20;
                break;
            case 3:
                tarifa = 25;
                break;
            default : cout<<"Opcion no valida.";
            }
            return tarifa;
        }
        float  calcCobro(float horas, float tarifa){
            float total = 0.0;
            for (float i = 0; i < horas; i++){
                total += tarifa;
            }
            return total;
        }
        float aplicDesc(float total){
            if (total > 200){
                total = total - total * 0.10;
                return total;
            }
            else {
                return total;
            }
        }
#endif