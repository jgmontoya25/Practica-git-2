//Uso de libreria cafeteria
//04-05-2026
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
            float total;
            cout<<"Seleccione su producto\n 1) Café \n 2) Té \n 3) Jugo" <<"\n";
            cin>> opc;
            precio = obtPrecio(opc);
            cout<<"Ingrese su total de articulos "<<"\n";
            cin>>totPiezas;
            acumulado = calAcumPagar(precio,totPiezas);
            desc = calcDesc(totPiezas, acumulado);
            cout<<"EL precio de su producto es de : $" <<precio <<"\n";
            cout<<"Su total es de : $" <<acumulado <<"\n";
            cout<<"Descuento de : $" <<desc <<"\n";
            total = acumulado - desc;
            cout<<"Su pago final es de : $" <<total <<"\n";
        }