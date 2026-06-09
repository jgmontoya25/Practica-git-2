//Libreria de biblioteca
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
    using namespace std;
        float calcMulta(int diasRetraso){
            float total = 0;
            int i=0;
            while (i < diasRetraso)
            {
                total += 5;
                i++;
            }
            return total;
        }
        string evaluarRetraso(int diasRetraso){
            if (diasRetraso <= 3){
                return "Leve";
            }
            else if (diasRetraso <= 7){
                return "Moderado";
            }
            else {
                return "Grave";
            }
        }