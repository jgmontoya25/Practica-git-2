//Libreria cine
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
    using namespace std;
        float obtPrecio (int cliente){
            float precio;
            switch (cliente)
            {
            case 1:
                precio = 50;
                break;
            case 2:
                precio = 80;
                break;
            case 3:
                precio = 60;
                break;
            default : cout<<"Opcion no valida.";
            }
            return precio;
        }
        float calcSubtot (int voletos, float precio){
            float subTot = 0.0;
            for (int i = 0; i < voletos; i++){
                subTot += precio;
            }
            return subTot;
        }
        string evaluarCompra(float total){
            if (total > 300){
                return "Venta normal";
            }
            else {
                return "Venta baja";
            }
        }