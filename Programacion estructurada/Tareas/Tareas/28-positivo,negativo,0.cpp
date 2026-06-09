//Determinar si un numero es +,- o 0
//Gualberto Montoya
//24-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                //Declaracion de variables
                int num;
                //Entradas
                cout<<"Ingrese su numero " <<"\n";
                cin>> num;
                if (num > 0)
                    cout <<"Quiere decir que " <<num <<" es positivo" <<"\n";
                else if (num < 0)
                    cout <<"Quiere decir que " <<num <<" es negativo" <<"\n";
                else 
                    cout <<"Quiere decir que el numero es 0" <<"\n";
    return 0;
            }