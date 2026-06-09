//Uso libreria biblioteca
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
#include "biblioteca.h"
    using namespace std;
        int main(){
            float total = 0;
            int diasRetraso;
            string claseficacion;
            cout<<"Ingrese sus dias de retraso: " <<"\n";
            cin>>diasRetraso;
            total = calcMulta (diasRetraso);
            claseficacion = evaluarRetraso (diasRetraso);
            cout<<"Deuda: $" <<total <<"\n";
            cout<<"Su adeudo es: " <<claseficacion <<"\n";  
        }