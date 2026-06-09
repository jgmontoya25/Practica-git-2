//Tarifas de transporte
//Gualberto Montoya
//20-02-2026

#include <iostream>

using namespace std;

    int main()
    {
        //Declaracion de variables
        int edad;
        //datos de entrada
        cout << "Cual es su edad " <<"\n";
        cin >> edad;
        //proceso
        if (edad < 12)
        {
            cout<< "Su tarifa es de 10$" <<"\n";
        }
        else if (edad >= 12 && edad <=60)
        {
            cout << "Su tarifa es de 20$" <<"\n";
        }
        else if (edad > 60)
        {
            cout << "Su tarifa es de 15$" <<"\n";
        }

     return 0;
        
    }