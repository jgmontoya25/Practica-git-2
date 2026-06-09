//Libreria de asistencias
//04-05-26
//Gualberto Montoya

#ifndef ASISTENCIA_H
#define ASISTENCIA_H
#include <iostream>
#include <string>
    using namespace std;
        int regisAsis(int totAlmns){
            int estado;
            int asis = 0;
                for (int i = 1; i<= totAlmns; i ++){
                    cout<<"Alumno " <<i <<" (1 = Asistio, 0 = no): ";
                    cin>> estado;
                        if (estado == 1){
                            asis++;
                        }
                }
            return asis; 
        }
        float calcPorcentaje(int siAsis, int totAlmns){
            float prom = siAsis * 100 / totAlmns;
            return prom;
        }
        string clasifcarAsis(float prom){
            if (prom >= 80){
                return "Asistencia alta";
            }
            else if (prom >= 60 && prom <= 79){
                return "Asistencia media";
            }
            else{
                return "Asistencia baja";
            }
        }
#endif