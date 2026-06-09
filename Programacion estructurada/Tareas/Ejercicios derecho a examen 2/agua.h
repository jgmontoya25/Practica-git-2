//Libreria agua potable
//04-05-2026
//Gualberto Montoya

#ifndef AGUA_H
#define AGUA_H
#include <iostream>
#include <string>
    using namespace std;
            float registroConsumo(int dias){
            float total = 0;
            float consumo;
            int i = 1;
            while (i <= dias){
                cout<<"Ingrese su consumo ";
                cin>>consumo;
                total += consumo;
                i++;
            }
            return total;
        }
        float calcCosto(float total){
            float costo = total * 12;
            return costo;
        }
        string evaluarConsumo(float consumo){
            if (consumo > 50){
                return "Consumo alto \n";
            }
            else {
                return "Consumo normal \n";
            }
        }

#endif