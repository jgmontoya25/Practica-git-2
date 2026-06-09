//Biblioteca electricidad
//04-05-2026
//Gualberto Montoya

#include <iostream>
#include "electricidad.h"
 using namespace std;
    int main(){
        int opc;
        float total;
        float pagoBase;
        int dias;
        float tarifa;
            cout<<"Para saber su costo electrico ingrese sus dias de uso: ";
            cin>>dias;
            cout<<"Ahora por favor ingrese su opcion dependiendo su condicion" <<"\n";
            cout<<"1) Domestica ($2.5*dia)\n2) Comercial ($4*dia)\n3) Industrial ($6*dia)\n";
            cin>>opc;
            tarifa = obtTarifa(opc);
            total = acumDinamic (dias);
            pagoBase = calcPago(tarifa,total);
            cout<<"Usted tiene un consumo total de " <<total <<"\n";
            cout<<"Y un pago final de " <<pagoBase <<"\n";
    }