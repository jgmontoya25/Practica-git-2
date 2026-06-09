//Uso libreria cine
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include "cine.h"
#include <string>
    using namespace std;
        int main(){
            int cliente;
            float precio;
            int voletos;
            float total;
            string evaluacion;
            cout<<"Bienvenido a su sistema de cine, por favor ingrese su tipo de cliente: " <<"\n";
            cout<<"1) Niño \n2) Adulto \n3) Estudiante \n";
            cin>>cliente;
            precio = obtPrecio (cliente);
            cout<<"Cuantos voletos vendio de este tipo de clientes: " <<"\n";
            cin>>voletos;
            total = calcSubtot (voletos, precio);
            evaluacion = evaluarCompra (total);
            cout<<"Total: $" <<total <<"\n";
            cout<<"Evaluacion: " <<evaluacion <<"\n";
            return 0;
        }