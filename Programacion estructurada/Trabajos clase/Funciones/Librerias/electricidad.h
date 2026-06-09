//Libreria de electricidad
//23-04-2026
//Gualberto Montoya

#ifndef ELECTRICIDAD_H
#define ELECTRICIDAD_H
#include <iostream>
    using namespace std;
        float obtTarifa(int opc){
            float tarifa;
            switch (opc)
            {
            case 1:
                tarifa = 2.5;
                break;
            case 2:
                tarifa = 4;
                break;
            case 3:
                tarifa = 6;
                break;
            default : cout<<"Opcion no valida.";
            }
            return tarifa;
        }
        float acumDinamic(int dias){
            float total = 0;
            float consumo;
            int i = 1;
            while (i <= dias){
                cout<<"Ingrese su consumo ";
                cin>>consumo;
                total += consumo;
                i++;
            }
            return total;
        }
        float calcPago(float tarifa, float total){
            float pagoBase = tarifa * total;
            if (pagoBase > 300)
                return pagoBase = pagoBase * 0.08 + pagoBase;
            else {
                return pagoBase;
            }
        }
#endif