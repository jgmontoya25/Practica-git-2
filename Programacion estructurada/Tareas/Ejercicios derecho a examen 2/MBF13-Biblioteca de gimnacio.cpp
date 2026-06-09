//Uso de libreria de gimnacio
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include "gimnacio.h"
    using namespace std;
        int main(){
            int plan;
            float precio;
            int meses;
            float subTotal;
            float promo;
            float total;

            cout<<"Buen dia, bienvenido a su sistema de registro al gimnacio \n";
            cout<<"Eliga tu plan\n 1) Basico $300\n 2) Estandar $500\n 3) Premium $800\n";
            cin>>plan;
            precio = obtCosto (plan);
            cout<<"Cuantos meses vas a asistir: \n";
            cin>>meses;
            subTotal = calcPagoMeses(meses, precio);
            promo = aplicarProm (meses, subTotal);
            total = subTotal - promo;
            cout<<"Su subtotal es de: $" <<subTotal <<"\n";
            cout<<"Su promocion es de: $" <<promo <<"\n";
            cout<<"Su total es de:  " <<total <<"\n";
        }
