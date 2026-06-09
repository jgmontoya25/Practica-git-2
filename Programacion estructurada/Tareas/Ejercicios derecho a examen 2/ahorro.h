//Libreria ahorro
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
    using namespace std;
        float calcAhorro(int dias){
            int i = 1;
            int tot = 0.0;
            float cantidadDiaria;
            while (i <= dias){
                cout<<"Ingrese su ahorro del dia: \n";
                cin>>cantidadDiaria;
                tot += cantidadDiaria;
                i++;
            }
            return tot;
        }
        string evaluarAhorro(float total){
            if (total >= 1000){
                return "Meta ha sido alcanzada";
            }
            else {
                return "Meta no ha sido alcanzada";
            }
        }