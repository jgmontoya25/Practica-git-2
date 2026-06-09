//Libreria paqueteria
//05-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float obtTarifaZona(int zona){
            float tarifa;
            switch (zona)
            {
            case 1:
                tarifa = 30;
                break;
            case 2:
                tarifa = 80;
                break;
            case 3:
                tarifa = 200;
                break;
            default : cout<<"Opcion no valida.";
            }
            return tarifa;
        }
        float calcCosto(float peso, float tarifa){
            float costo;
            return costo = peso * tarifa;
        }
        float aplicarRecargo(float peso, float costo){
            float recargo;
            if (peso > 10){
                return recargo =costo * 0.10;
            }
            else {
                return recargo = 0;
            }
        }