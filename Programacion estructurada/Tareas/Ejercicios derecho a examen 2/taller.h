//Libreria taller
//05-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float obtCostoServicio(int servicio){
            float precio;
            switch (servicio)
            {
            case 1:
                precio = 500;
                break;
            case 2:
                precio = 1200;
                break;
            case 3:
                precio = 900;
                break;
            default : cout<<"Opcion no valida.\n";
                break;
            }
            return precio;
        }
        float calcTot(int cantidadServicios, float costoServicio){
            float total = 0.0;
            for (int i = 0; i < cantidadServicios; i++){
                total += costoServicio;
            }
            return total;
        }
        float aplicarDesc(float total){
            float desc;
            if (total > 2000){
                desc = total * 0.10;
                return desc;
            }
            else{
            return desc = 0;
            }
        }