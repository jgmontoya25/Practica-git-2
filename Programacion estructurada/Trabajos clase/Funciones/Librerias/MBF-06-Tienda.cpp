//Tienda
//21-04-2026
//Gualberto Montoya

#include <iostream>
#include "tienda.h"
    using namespace std;
        int main(){
            float subTot;
            float desc;
            float iva;
            float total;
            cout<<"Hola, ingrese el precio de su producto" <<"\n";
            cin>>subTot;
            desc = calcDesc(subTot);
            if (desc == 0)
            {
                cout<<"No aplica para descuento" <<"\n";
            }
            else{
                cout<<"Se aplico un descuento de $" <<desc <<"\n";
            }
            iva = calcIva(subTot);
            cout<<"Su impuesto es de $" <<iva <<"\n";
            total = calcTot(subTot, desc, iva);
            cout<<"Su total a pagar es de $" <<total <<"\n";
        }