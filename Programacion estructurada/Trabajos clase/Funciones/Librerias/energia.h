//Libreria energia
//20-04-2026
//Gualberto Montoya

#ifndef ENERGIA_H
#define ENERGIA_H
#include <iostream>
    using namespace std;
        float calculoCostBase (float consumo){
            return consumo * 2.5;
        }
        float calcRecargo (float costoBase){
            return costoBase * 0.12;
        }
        float calcTotal (float costoBase, float recargo){
            return costoBase + recargo;
        }
#endif