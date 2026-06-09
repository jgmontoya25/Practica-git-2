//Uso libreria ventas.h
//17-04-2026
//Gualberto Montoya

#include <iostream>
#include "inventario.h"
    using namespace std;
        int main() {
        int stockInicial;
        int numeroProductos;
        int totalVendidos;
        int stockRestante;
        cout << "Ingrese el stock inicial: " <<"\n";
        cin >> stockInicial;    
        cout << "Ingrese la cantidad de productos a vender: " <<"\n";
        cin >> numeroProductos;
        totalVendidos = registrarVentas(numeroProductos);
        stockRestante = calcularRestante(stockInicial, numeroProductos);
        string evaluacion = evaluarVentas(totalVendidos);
        cout << "Usted vendio en articulos un total de: $" << totalVendidos <<"\n";
        cout << "Le quedo un inventario de: " << stockRestante <<"\n";
        cout << "Usted tiene una: " << evaluacion <<"\n";

    return 0;
}