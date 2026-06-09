//Uso de libreria ahorro
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
#include "ahorro.h"
    using namespace std;
        int main(){
            int dias;
            float total;
            string ahorro;
            cout<<"Buen dia, bienvenido a su sistema de ahorro\n";
            cout<<"Ingrese sus días de ahorro: \n";
            cin>>dias;
            total = calcAhorro (dias);
            ahorro = evaluarAhorro (total);
            cout<<"Su ahorro es: $" <<total <<"\n";
            cout<<"Su : " <<ahorro <<"\n";
        }