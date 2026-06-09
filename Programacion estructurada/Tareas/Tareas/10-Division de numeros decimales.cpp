//Division de numeros decimales
//Gualberto Montoya
//12-02-2026

#include <iostream>

using namespace std;

    int main()
        {
        //declaracion de variables
            double num1;
            double num2;
            double result;
        //Solicitud de datos al usuario
                cout <<"Ingrese el primer valor: " <<"\n";
                cin >> num1;
                cout <<"Ingrese el segundo valor: " <<"\n";
                cin >> num2;
        //Proceso
                result= num1/num2;
                cout <<"La division de los valores anterior es igual a: " <<result <<"\n";
        return 0;
        } 