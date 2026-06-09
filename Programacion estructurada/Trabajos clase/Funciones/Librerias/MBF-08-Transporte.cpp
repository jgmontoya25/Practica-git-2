//Transporte
//22-04-2026
//Gualberto Montoya

#include <iostream>
#include "transporte.h"
    using namespace std;
        int main(){
            int dias;
            float tarifa;
            int opc;
            float total;
            string clasif;
            cout<<"Hola, cuantos dias utilizo el transporte" <<"\n";
            cin>>dias;
            cout<<"Para conocer su total de tarifa seleccione una opcion:  \n 1) Estudiante ( Tarifa: $3.5) \n 2) Usuario Normal ( Tarifa: $15) \n 3) Adulto Mayor (Tarifa: $5) \n";
            cin>>opc;
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
                    return 1;
            }
            total = calcGasto(dias,tarifa);
            cout<<"Gasto total: " <<"$" <<total <<"\n";
            clasif = evaluarGasto(total);
            cout<<"Clasificación: " <<clasif <<"\n";
        }