//Libreria para promedio
//17-04-2026
//Gualberto Montoya

#ifndef PROMEDIO_H
#define PROMEDIO_H
#include <iostream>
    using namespace std;
        double calProm (double totMat){
            double cal;
            double sumCal = 0.0;
            double prom;
           for (int i=1; i <= totMat; i++){
                cout << "Ingresa la calificacion de la materia: ";
                cin >> cal;
                sumCal = sumCal + cal;
           }
            prom = sumCal / totMat;
                return prom;
        }

        double estatus(double estatus){
            if (estatus <= 6){
                cout<<"Reprobado \n";
            }
            else {
                cout<<"Aprobado \n";
            }
            return estatus;
        }
#endif