//Libreria de ventas
//04-05-2026
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
        float calcDesc (float subtotal){
            if(subtotal >= 1000){
                return subtotal * 0.10;
            }
            else{
                return subtotal = 0;
            }
        }
        float calTotal(float subTotal,float iva, float desc){
            return subTotal + iva - desc;
        }
#endif