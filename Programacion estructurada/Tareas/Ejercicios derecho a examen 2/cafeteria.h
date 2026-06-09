//Libreria de cafeteria
//04-05-2026
//Gualberto Montoya

#ifndef CAFETERIA_H
#define CAFETERIA_H
#include <iostream>
    using namespace std;
        float obtPrecio(int opc){
            float precio;
            switch (opc)
            {
            case 1:
                precio = 35;
                break;
            case 2:
                precio = 25;
                break;
            case 3:
                precio = 30;
                break;
            default : cout<<"Opcion no valida.\n";
                break;
            }
            return precio;
        }
        float calAcumPagar(float precio, int totPiezas){
            float acumulado;
            for(int i = 1; i < totPiezas; i++){
                acumulado =+ precio * totPiezas;
            }
            return acumulado;
        }
        float calcDesc( int totPiezas, float acumulado){
            float desc;
            if (totPiezas >= 5){
                desc = acumulado * 0.12;
            }
            else{
                desc = 0;
            }
            return desc;
        }
#endif