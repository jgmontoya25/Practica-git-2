//Libreria para ahorro
//21-04-2026
//Gualberto Montoya

#ifndef AHORRO_H
#define AHORRO_H
#include <iostream>
#include <string>
    using namespace std;
        float calcAhorro(int dias){
            int i = 1;
            int tot = 0.0;
            while (i <= dias){
                tot = tot + 50;
                i++;
            }
            return tot;
        }
        string evaluarAhorro(float total){
            if (total >= 1000){
                return "Buen ahorro";
            }
            else {
                return "Ahorro bajo";
            }
        }
#endif