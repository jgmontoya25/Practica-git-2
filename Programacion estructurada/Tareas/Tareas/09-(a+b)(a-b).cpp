//Operaciones con 2 variables "(a+b)(a-b)"
//Gualberto Montoya
//12-02-2026

#include <iostream>

using namespace std;

    int main()
        {
        //declaracion de variables
            int num1;
            int num2;
            int result;
        //Solicitud de datos al usuario
                cout <<"Ingrese el primer valor: " <<"\n";
                cin >> num1;
                cout <<"Ingrese el segundo valor: " <<"\n";
                cin >> num2;
        //Proceso
                result= (num1+num2)*(num1-num2);
                cout <<"El resultado de la operacion anterior es igual a: " <<result <<"\n";
        return 0;
        } 