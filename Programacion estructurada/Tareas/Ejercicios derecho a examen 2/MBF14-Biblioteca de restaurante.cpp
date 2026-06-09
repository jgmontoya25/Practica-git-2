//Uso libreria restaurante
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
#include "restaurante.h"
    using namespace std;
        int main(){
            float propina;
            float subTot;
            string clasificacion;
            float platillo;
            float total;
            cout<<"Buen día, ingrese su cantidad de platillo/s: \n";
            cin>>platillo;
            subTot = calcSubTot(platillo);
            propina = calcPropina(subTot);
            clasificacion = evaluarCuenta(subTot);
            total = subTot + propina;
            cout<<"Subtotal: $" <<subTot <<"\n";
            cout<<"Propina: $" <<propina <<"\n";
            cout<<"Total: $" <<total <<"\n";
            cout<<"Su cuenta es: " <<clasificacion <<"\n";
            return 0;
        }