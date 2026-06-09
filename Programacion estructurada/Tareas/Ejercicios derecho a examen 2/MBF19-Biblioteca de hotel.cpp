//Uso libreria hotel
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include "hotel.h"
    using namespace std;
        int main() {
            int tipoHabitacion, numeroNoches;
            float tarifaBase, subtotalGasto, montoDescuento, totalFinal;
            cout << "\nIngrese el tipo de habitacion\n1) Sencilla $700*Noche\n2) Doble $1000*Noche\n3) Suite $1800*Noche\n";
            cin >> tipoHabitacion;
            cout << "Ingrese la cantidad de noches a hospedarse: \n";
            cin >> numeroNoches;
            tarifaBase = obtenerTarifaHabitacion(tipoHabitacion);
            subtotalGasto = calcularHospedaje(numeroNoches, tarifaBase);
            montoDescuento = aplicarDescuento(numeroNoches, subtotalGasto);
            totalFinal = subtotalGasto - montoDescuento;
            cout << "Tarifa por noche: $" << tarifaBase <<"\n";
            cout << "Subtotal: $" << subtotalGasto <<"\n";
            cout << "Descuento: $" << montoDescuento <<"\n";
            cout << "Total a pagar: $" << totalFinal <<"\n";
            return 0;
            }