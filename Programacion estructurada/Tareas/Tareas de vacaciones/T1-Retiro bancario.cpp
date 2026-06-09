//Validador de retiro bancario
//07-04-2026
//Gualberto Montoya
//Este programa debe avisar al usuario si el saldo es suficiente
//y hacer el retiro mostrando el saldo nuevo

#include <iostream>
    using namespace std;
        int main()
            {
                int saldo;
                int saldoNuev;
                int retiro;
                cout<<"Cual es su saldo actual: " <<"\n";
                cin>> saldo;
                cout<<"Cual seria su monto de retiro: " <<"\n";
                cin>> retiro;
                if (retiro > saldo){
                    cout<<"Fondos insuficientes" <<"\n";
                }
                else {
                    saldoNuev = saldo -retiro;
                    cout<<"Su nuevo saldo es de " <<saldoNuev <<"\n";
                }
            return 0;
            }