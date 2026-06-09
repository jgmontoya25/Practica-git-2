//Uso libreria farmacia
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include "farmacia.h"
    using namespace std;
        int main(){
            int medicamento;
            float subTot;
            float precio;
            int cantidad;
            float desc;
            float total;
            cout<<"Bienvenido a su sistema de surtido de medicamentos\nPor favor ingrese su medicamento" <<"\n";
            cout<<"1) Analgesico \n2) Vitamina \n3) Jarabe \n";
            cin>>medicamento;
            precio = obtPrecio (medicamento);
            cout<<"Por favor ingrese la cantidad requerida: " <<"\n";
            cin>>cantidad;
            subTot = calcSubtot (cantidad, precio);
            desc = calcDesc (subTot);
            total = subTot - desc;
            cout<<"Precio unitario: $" <<precio <<"\n";
            cout<<"Subtotal: $" <<subTot <<"\n";
            cout<<"Descuento: $" <<desc <<"\n";
            cout<<"Total: $" <<total <<"\n";
            return 0;
        }
