//Cual de dos numeros es mayor con condicion
//Gualberto Montoya
//25-02-2026

#include <iostream>
    using namespace std;
        int main()
        {
            //declaracion de variables
            int val1;
            int val2;
            int result;
            //entradas
            cout <<"Ingrese el valor 1" <<"\n";
            cin >> val1;
            cout <<"Ingrese el valor 2" <<"\n";
            cin >> val2;
            //proceso
            result = (val1>val2)?val1:val2;
            //salidas
            cout<<"El numero mayor es :" <<result <<"\n";

    return 0;
        }