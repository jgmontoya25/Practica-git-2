//Suma de numeros positivos
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int val;
            int sum_val = 0;
            char respuesta;

            do {
                cout<<"Ingrese un numero: " <<"\n";
                cin>>val;
                sum_val += val;
                cout<<"¿Desea agregar otro? (s/n): " <<"\n";
                cin>>respuesta;
            }
            while (respuesta == 's' || respuesta == 'S');
            cout<<"La suma de los numeros ingresados es: " <<sum_val <<"\n";
        }