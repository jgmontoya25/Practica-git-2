//Libreria para ahorro
//21-04-2026
//Gualberto Montoya

#include <iostream>
#include "ahorro.h"
    using namespace std;
        int main(){
            int dias;
            float total;

            cout<<"Ingrese sus dias de ahorro: ";
            cin>>dias;
            total = calcAhorro(dias);
            cout<<"Usted tiene un ahorro total de ";
            cout<<total <<"\n";
            cout<<"Usted tiene un " <<evaluarAhorro(total) <<"\n";
        }