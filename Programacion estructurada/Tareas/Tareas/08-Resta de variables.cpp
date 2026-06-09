//Operaciones resta de variables
//Gualberto Montoya
//12-02-2026

#include <iostream>

using namespace std;

    int main()
        {
        //declaracion de variables
            int num1;
            int num2;
            int num3;
            int result;
        //Solicitud de datos al usuario
                cout <<"Ingrese el primer valor: " <<"\n";
                cin >> num1;
                cout <<"Ingrese el segundo valor: " <<"\n";
                cin >> num2;
                cout <<"Ingrese el tercer valor: " <<"\n";
                cin >> num3;
        //Proceso
                result= num1-num2-num3;
                cout <<"La resta de los 3 valores anteriores es igual a: " <<result <<"\n";
        return 0;
        } 