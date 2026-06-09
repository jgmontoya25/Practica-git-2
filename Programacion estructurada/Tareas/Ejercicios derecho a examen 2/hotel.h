//Libreria hotel
//05-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float obtenerTarifaHabitacion(int tipo) {
            float tarifa = 0.0;
            switch (tipo) {
                case 1:
                    tarifa = 700;
                    break;
                case 2:
                    tarifa = 1000;
                    break;
                case 3:
                    tarifa = 1800;
                    break;
                default:cout<<"Opcion no valida.\n";
                    break;
                }
                return tarifa;
        }
        float calcularHospedaje(int noches, float tarifa) {
            float subtotal = 0.0;
            for (int i = 0; i < noches; i++) {
                subtotal += tarifa;
            }
            return subtotal;
        }
        float aplicarDescuento(int noches, float total) {
            float descuento = 0.0;
            if (noches >= 5) {
                descuento = total * 0.15;
            } 
            else {
                descuento = 0.0;
            }
            return descuento;
        }