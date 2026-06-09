//BOnos por antiguedad
//Gualberto Montoya
//23-02-2026

#include <iostream>
using namespace std;
    int main()
    {
        //Declaracion de variables
        int anios;
        int bono;
        int salarioBase;
        //datos de entrada
        cout << "Cuantos años tiene en la empresa: " <<"\n";
        cin >> anios;
        cout << "Cual es su salario base: " <<"\n";
        cin >> salarioBase;
        //proceso
        if (anios > 10 )
        {
            bono = salarioBase * 0.15;
            cout<< "Su bono sera de " <<bono <<"\n";
        }
        else if (anios >= 5 && anios <= 10)
                {
            bono = salarioBase * 0.10;
            cout << "Su bono sera de " <<bono <<"\n";
        }
        else if (anios < 5)
        {
            bono = salarioBase * 0.05;
            cout << "Su bono sera de " <<bono <<"\n";
        }

     return 0;
        
    }