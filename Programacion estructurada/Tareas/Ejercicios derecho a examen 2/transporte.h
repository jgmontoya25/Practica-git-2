//Libreria de transporte
//04-05-2026
//Gualberto Montoya

#ifndef TRANSPORTE_H
#define TRANSPORTE_H
#include <iostream>
#include <string>
    using namespace std;
    float obtTarifa(int opc){
            float tarifa;
            switch (opc)
            {
            case 1:
                tarifa = 3.5;
                break;
            case 2:
                tarifa = 15;
                break;
            case 3:
                tarifa = 5;
                break;
            default : cout<<"Opcion no valida.";
            }
            return tarifa;
        }
        float calcGasto(int dias, float tarifa){
            float total = 0;
            for (int i = 0; i < dias; i++){
                total += tarifa;
            }
            return total;
        }
        string evaluarGasto(float total){
            if (total >= 200){
                return "Gasto alto";
            }
            else {
                return "Gasto moderado";
            }
        }
#endif