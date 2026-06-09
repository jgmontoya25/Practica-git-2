//Transporte
//04-05-2026
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
            cout<<"Seleccione su tipo de usuario:  \n 1) Estudiante \n 2) Usuario Normal \n 3) Adulto Mayor \n";
            cin>>opc;
            tarifa = obtTarifa (opc);
            cout<<"Su tarifa es de: $" <<tarifa <<"\n";
            total = calcGasto(dias,tarifa);
            cout<<"Gasto total: " <<"$" <<total <<"\n";
            clasif = evaluarGasto(total);
            cout<<"Clasificación: " <<clasif <<"\n";
        }