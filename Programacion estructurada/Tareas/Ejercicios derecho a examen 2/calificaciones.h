//Libreria calificaciones
//04-05-2026
//Gualberto Montoya

#ifndef CALIFICACIONES_H
#define CALIFICACIONES_H
#include <iostream>
#include <string>
    using namespace std;
        double calProm (double cantidad){
            double cal;
            double sumCal = 0.0;
            double prom;
           for (int i=1; i <= cantidad; i++){
                cout << "Ingresa la calificacion de la materia: ";
                cin >> cal;
                sumCal = sumCal + cal;
           }
            prom = sumCal / cantidad;
                return prom;
        }

        string estatus(double estatus){
            if (estatus >= 7){
                return "Aprobado \n";
            }
            else {
                return "Reprobado \n";
            }
        }
#endif