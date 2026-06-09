//Uso libreria paqueteria
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include "paqueteria.h"
    using namespace std;
        int main(){
            float tarifa;
            int zona;
            float peso;
            float costo;
            float recargo;
            float total = 0.0;
            cout<<"Bienvenido a su sitema de paqueteria \n";
            cout<<"Ingrese su zona: \n1) Local $30\n2) Nacional $80\n3) Internacional $200\n";
            cin>>zona;
            tarifa = obtTarifaZona (zona);
            cout<<"Porfavor ingrese el peso de su paquete (Kg): \n";
            cin>>peso;
            costo = calcCosto(peso, tarifa);
            recargo = aplicarRecargo (peso, costo);
            total = costo + recargo;
            cout<<"Costo: $" <<costo <<"\n";
            cout<<"Recargo: $" <<recargo <<"\n";
            cout<<"Total: $" <<total <<"\n";
        return 0;
        }