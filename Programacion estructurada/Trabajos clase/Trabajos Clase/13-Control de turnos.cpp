//Operador MOD
//Gualberto Montoya
//13-02-2026

#include <iostream>

using namespace std;

    int main()
        {
        //declaracion de variables
            int numeroEmp;
            int turno;
        //Solicitud de datos al usuario
                cout <<"Turno 1 :6:00 AM - 2:00 PM" <<"\n";
                cout <<"Turno 2 :2:00 PM - 10:00 PM" <<"\n";
                cout <<"Turno 3 :10:00 PM - 6:00 AM" <<"\n";
                cout <<"Ingrese su numero de empleado: " <<"\n";
                cin >> numeroEmp;
        //Proceso
                 turno = numeroEmp%3+1;
                 cout <<"El numero del empleado es " <<numeroEmp <<" Estara en el turno " <<turno <<"\n";
        return 0;
        } 