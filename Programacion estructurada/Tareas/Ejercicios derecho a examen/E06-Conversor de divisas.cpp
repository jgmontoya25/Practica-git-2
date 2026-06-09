//Conversor de pesos
//Gualberto Montoya
//12-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                float pesoMX;
                float total;
                int opc;
                cout<<"Seleccione un numero dependiendo su necesidad \n 1-Dolares 2-Euros 3-Yenes" <<"\n";
                cin >> opc;
                cout<<"Ingrese su cantidad a convertir " <<"\n";
                cin>> pesoMX;
                switch (opc)
                {
                case 1:
                    total = pesoMX / 18.50;
                    cout<<"Su total en dolares es " <<total <<"\n";
                    break;
                case 2:
                    total = pesoMX / 20.10;
                    cout<<"Su total en euros es " <<total <<"\n";
                    break;
                case 3:
                    total = pesoMX / 8.15;
                    cout<<"Su total en yenes es " <<total <<"\n";
                    break;
                default:
                    cout<<"No esta dentro de las opciones, pruebe de nuevo" <<"\n";
                    break;
                }
            }