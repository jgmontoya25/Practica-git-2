//Operador MOD
//Gualberto Montoya
//13-02-2026

#include <iostream>

using namespace std;

    int main()
        {
        //declaracion de variables
            int canBotellas;
            int PAQUETE = 6;
            int sobrantes;
            int totalPaquetes;
        //Solicitud de datos al usuario
                cout <<"Ingrese la cantidad de botellas: " <<"\n";
                cin >> canBotellas;
        //Proceso
                totalPaquetes = canBotellas/PAQUETE;
                sobrantes = canBotellas%PAQUETE;
                cout <<"La cantidad de paquetes que se pueden armar es " <<totalPaquetes <<"\n";
                cout <<"Y el total de botellas sobrantes es " <<sobrantes <<"\n";
        return 0;
        } 