//Libreria de tienda
//21-04-2026
//Gualberto Montoya

#ifndef TIENDA_H
#define TIENDA_H
#include <iostream>
    using namespace std;
        float calcDesc(float subTot){
            if (subTot >= 1000){
                return subTot * 0.10;
            }
            else{
                return 0;
            }
        }
        float calcIva(float iva){
            return iva * 0.08;
        }
        float calcTot(float subTot, float desc, float iva){
            return subTot - desc + iva;
        }
#endif