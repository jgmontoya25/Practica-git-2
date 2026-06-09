//Libreria de ventas
//15-04-2026
//Gualberto Montoya

#ifndef VENTAS_H
#define VENTAS_H
#include <iostream>
    using namespace std;
        float calSubTot (float precio, float cantidad){
                return precio * cantidad;
        }
        float calIva(float subtotal){
            return subtotal * 0.16;
        }
        float calTotal(float subTotal,float iva){
            return subTotal + iva;
        }
#endif