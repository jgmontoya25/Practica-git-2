//Cual de dos numeros es mayor
//Gualberto Montoya
//24-02-2026

#include <iostream>
    using namespace std;
        int main ()
            {
                //Declaracion de variables
                int num1;
                int num2;
                //Entradas
                cout <<"Ingrese numero 1 " <<"\n";
                cin >> num1;
                cout <<"Ingrese numero 2 " <<"\n";
                cin >> num2;
                //proceso
                if (num1 > num2)
                    cout << "El numero mayor es " <<num1 <<"\n";
                else
                    cout << "El numero mayor es el " <<num2 <<"\n";
            return 0;
            }