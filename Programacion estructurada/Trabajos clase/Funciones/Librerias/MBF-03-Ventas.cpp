//Uso libreria ventas.h
//17-04-2026
//Gualberto Montoya

#include <iostream>
#include "ventas.h"
    using namespace std;
        int main(){
            float precio;
            float cantidad;
            cout<<"Hola que tal, dime el precio de tu producto " <<"\n";
            cin>>precio;
            cout<<"Ahora dime la cantidad que llevas " <<"\n";
            cin>>cantidad;
            float subTot = calSubTot(precio, cantidad);
            float iva = calIva (subTot);
            float total = calTotal (subTot, iva);
            cout<<"EL subtotal: ";
            cout<<subTot <<"\n";
            cout<<"IVA: ";
            cout<<iva <<"\n";
            cout<<"Total a pagar: ";
            cout<<total <<"\n";
        return 0;
    }