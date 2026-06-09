//Uso de libreria taller
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include "taller.h"
    using namespace std;
        int main(){
            int servicio;
            float precio;
            float cantidadDeServicios;
            float total;
            float desc;
            float totFinal;
            cout<<"Bienvenido a su sitema de taller \n";
            cout<<"Ingrese su servicio: \n1) Aceite $500\n2) Frenos $1200\n3) Afinacion $900\n";
            cin>>servicio;
            precio = obtCostoServicio(servicio);
            cout<<"Por favor ingrese la cantidad de servicios que desea realizar: \n";
            cin>>cantidadDeServicios;
            total = calcTot(cantidadDeServicios, precio);
            desc = aplicarDesc (total);
            totFinal = total - desc;
            cout<<"Total: " <<total <<"\n";
            cout<<"Descuento: " <<desc <<"\n";
            cout<<"Total final: " <<totFinal <<"\n";
        return 0;
        }