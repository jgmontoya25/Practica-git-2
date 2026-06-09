//Biblioteca gimnacio
//05-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float obtCosto(int plan){
            float precio;
            switch (plan)
            {
            case 1:
                precio = 300;
                break;
            case 2:
                precio = 500;
                break;
            case 3:
                precio = 800;
                break;
            default : cout<<"Opcion no valida.";
            }
            return precio;
        }
        float calcPagoMeses(int meses, float costoPlan){
            float total = 0.0;
            for (int i = 0; i < meses; i++){
                total += costoPlan;
            }
            return total;
        }
        float aplicarProm(int meses, float total){
            float promo;
            if (meses >= 6){
                promo = total * 0.15;
                return promo;
            }
            else {
                promo = 0;
                return promo;
            }
        }