//Programa que sume o reste dos numeros segun la opcion que se escoja
//Gualberto Montoya
//25-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                //Declaracion de variables
                int num1;
                int num2;
                int result;
                int opc;
                //entradas
                cout <<"ingrese el numero 1" <<"\n";
                cin >>num1;
                cout <<"ingrese el numero 2" <<"\n";
                cin >>num2;
                cout<<"elige la opcion 1 para sumar, la opcion 2 para restar" <<"\n";
                cin >> opc;
                //proceso
                result = (opc==1)?num1+num2:num1-num2;
                //salidas
                cout <<"El resultado es: " <<result <<"\n";
    return 0;
            }