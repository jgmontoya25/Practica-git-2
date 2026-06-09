//Uso de libreria estacionamiento
//04-05-2026
//Gualberto Montoya

#include <iostream>
#include "estacionamiento.h"
    using namespace std;
        int main(){
            int opc;
            float tarifa;
            float horas;
            float total;
            float descuento;

            cout<<"Ingrese su opcion dependiendo su condicion" <<"\n";
            cout<<"1) Motocicleta ($10*hora)\n2) Automovil ($20*hora)\n3) Camioneta ($25*hora)\n";
            cin>>opc;
            cout<<"Para saber su costo de estacionamiento ingrese sus horas de uso: ";
            cin>>horas;
            tarifa = obtTarifa(opc);
            total = calcCobro(horas, tarifa);
            if (total > 200){
                descuento = aplicDesc (total);
                cout<<"Usted tiene un total a pagar de " <<descuento;
            }
            else {
                cout<<"Su total a pagar es de " <<total <<"\n";
            }
            cout<<"\n";
        }