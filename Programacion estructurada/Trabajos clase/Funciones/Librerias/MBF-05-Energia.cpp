//Libreria energia
//20-04-2026
//Gualberto Montoya

#include <iostream>
#include "energia.h"
    using namespace std;
        int main(){
            float costoTot;
            float consumo;
            float recargo;
            cout<<"Para saber su costo base ingrese su consumo en KW" <<"\n";
            cin>>consumo;
            cout<<"Tiene un costo base de ";
            consumo = calculoCostBase(consumo);
            cout<<"$" <<consumo <<"\n";
            cout<<"Usted tiene un recargo de ";
            recargo = calcRecargo(consumo);
            cout<<"$" <<recargo <<"\n";
            cout<<"SU total a pagar sera de ";
            costoTot = calcTotal(consumo,recargo);
            cout<<"$" <<costoTot <<"\n";
            return 0;
        }