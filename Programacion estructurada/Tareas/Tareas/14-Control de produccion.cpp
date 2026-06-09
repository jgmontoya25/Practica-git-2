//Control de produccion en la fabrica
//Gualberto Montoya
//17-02-2026

#include <iostream>

using namespace std;

    int main()
        {
        //declaracion de variables
            int cajaGde= 12;
            int cajaMed= 5;
            int numTotalPz;
            int pzRestantesGde;
            int totalCajaGde;
            int totalCajaMed;
            int pzRestantesMed;
        //solicitud de datos al usuario
            cout <<"Ingrese la cantidad de piezas " <<"\n";
            cin >> numTotalPz;
        //proceso
            totalCajaGde = numTotalPz/cajaGde;
            pzRestantesGde = numTotalPz%cajaGde;
            totalCajaMed = pzRestantesGde/cajaMed;
            pzRestantesMed = pzRestantesGde%cajaMed;
            cout <<"El numero total de piezas producidas es " <<numTotalPz <<"\n";
            cout <<"Se pueden llenar un total de " <<totalCajaGde <<" cajas grandes" <<"\n";
            cout <<"Se pueden llenar un total de " <<totalCajaMed <<" cajas medianas" <<"\n";
            cout <<"Quedan un total de " <<pzRestantesMed <<" piezas sin empaquetar" <<"\n";
        return 0;
        }