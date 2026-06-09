//Uso de libreria cafeteria
//28-04-2026
//Gualberto Montoya

#include <iostream>
#include "cafeteria.h"
    using namespace std;
        int main(){
            int opc;
            float precio;
            int totPiezas;
            float acumulado;
            float desc;
            cout<<"Seleccione su producto\n 1) Café ($35)\n 2) Té ($25)\n 3) Jugo ($30)" <<"\n";
            cin>> opc;
            precio = obtPrecio(opc);
            cout<<"Ingrese su total de articulos "<<"\n";
            cin>>totPiezas;
            acumulado = calAcumPagar(precio,totPiezas);
            desc = calcDesc(totPiezas, acumulado);
            resumen(precio, totPiezas, acumulado, desc);
        }