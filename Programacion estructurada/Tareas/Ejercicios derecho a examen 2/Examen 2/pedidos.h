//Examen, hacer un codigo de pedidos de comida.
//07-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float obtPrecio(int opc){
            float precio;
            switch (opc)
            {
            case 1:
                precio = 85;
                break;
            case 2:
                precio = 120;
                break;
            case 3:
                precio = 70;
                break;
            case 4:
                precio = 40;
                break;
            default : cout<<"Opcion no valida.";
            }
            return precio;
        }
        float calAcumPagar(float precio, int totPiezas){
            float totPagar;
            for(int i = 1; i < totPiezas; i++){
                totPagar =+ precio * totPiezas;
            }
            return totPagar;
        }
        float calcEnvio(float totPagar){
            float envio;
            if (totPagar <= 300){
                return envio = 50;
            }
            else {
                return envio = 0;
            }
        }
        float totalPagar(float totPagar, float envio){
            float pagoFinal;
            return pagoFinal = totPagar + envio;
        }