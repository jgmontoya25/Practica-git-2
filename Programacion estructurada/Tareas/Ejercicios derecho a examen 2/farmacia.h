//Libreria farmacia
//05-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float obtPrecio (int medicamento){
            float precio;
            switch (medicamento)
            {
            case 1:
                precio = 50;
                break;
            case 2:
                precio = 80;
                break;
            case 3:
                precio = 95;
                break;
            default : cout<<"Opcion no valida.";
            }
            return precio;
        }
        float calcSubtot (int cantidad, float precio){
            float subTot = 0.0;
            for (int i = 0; i < cantidad; i++){
                subTot += precio;
            }
            return subTot;
        }
        float calcDesc (float subTot){
            float desc = 0.0;
            if (subTot > 500){
                desc = subTot * 0.05;
                return desc;
            }
            else {
                desc = 0;
                return desc;
            }
        }