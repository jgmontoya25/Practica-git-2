//Libreria de ventas
//04-05-2026
//Gualberto Montoya

#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <iostream>
    using namespace std;
            int registrarVentas(int productos) {
                int totalVentas = 0;
                int ventaActual = 0;
                for (int i = 0; i < productos; i++) {
                cout << "Ingrese la cantidad vendida de los productos " << (i + 1) << ": ";
                cin >> ventaActual;
                totalVentas += ventaActual;
                }
               return totalVentas;
            }
            int calcularRestante(int stockInicial, int vendidos) {
                return stockInicial - vendidos;
            }
            string evaluarVentas(int total) {
                if (total > 100) {
                    return "Alta venta";
                }
                else {
                    return "Venta baja";
                }
            }
#endif