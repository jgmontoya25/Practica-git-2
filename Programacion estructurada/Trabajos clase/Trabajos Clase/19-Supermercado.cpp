//Descuento supermercado
//Gualberto Montoya
//19/02/2026

#include <iostream>

using namespace std;

    int main()
    {
        //Declaracion de variables
        int compra;
        int subtotal;
        int descuento;
        //Lectura de datos
        cout <<"Ingrese el total de la compra " <<"\n";
        cin >> compra;
        //condicion
        if (compra >= 1000)
           { 
            descuento = compra*0.10;
            subtotal = compra-descuento;
           }
        //resultados
        cout<< "El subtotal es " <<subtotal <<"\n";
        cout<< "El descuento es " <<descuento <<"\n";
return 0;
         }