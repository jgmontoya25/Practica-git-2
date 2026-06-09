//Libreria de produccion
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
    using namespace std;
        int registrarProduccion(int dias){
             int i = 1;
            int tot = 0.0;
            float cantidadDiaria;
            while (i <= dias){
                cout<<"Ingrese su produccion del dia: \n";
                cin>>cantidadDiaria;
                tot += cantidadDiaria;
                i++;
            }
            return tot;
        }
        float calcPromDiario(int total, int dias){
            float promedio;
            return promedio = total / dias;
        }
        string evaluarProduccion(int total){
            if (total >= 1000){
                return "Alta";
            }
            else if (total >= 500 && total <= 900){
                return "Media";
            }
            else {
                return "Menor";
            }
        }