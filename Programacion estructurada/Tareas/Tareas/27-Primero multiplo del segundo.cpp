//Determinar si num1 es multiplo de num2
//Gualberto Montoya
//24-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                //Declaracion de variables
                int num1;
                int num2;
                //Entradas
                cout <<"Ingrese numero 1 " <<"\n";
                cin >>num1;
                cout <<"Ingrese nunero 2" <<"\n";
                cin >>num2;
                //Proceso
                if (num1 % num2 == 0)
                cout <<"Quiere decir que " <<num1 <<" es multiplo de " <<num2 <<"\n";
                else if (num1 % num2 != 0)
                cout <<"Quiere decir que " <<num1 <<" no es multiplo de " <<num2 <<"\n";
    return 0;
            }