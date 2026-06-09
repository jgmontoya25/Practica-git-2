//Libreria de asistencias
//28-04-26
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
        string clasifcarAsis(int siAsis, int totAlmns){
            float prom = siAsis * 100 / totAlmns;
            if (prom < 60){
                return "Asistencia baja";
            }
            else if (prom >= 60 && prom <= 79){
                return "Asistencia media";
            }
            else{
                return "Asistencia alta";
            }
        }
        void mostrarResumen(int asistieron, int totalDeAlumnos, string clasificacion){
            float porcentaje = (asistieron * 100 / totalDeAlumnos);
            cout<<"Tuvo una asistencia de " <<asistieron <<" alumnos" <<"\n";
            cout<<"Usted tienne un total de " <<totalDeAlumnos <<" alumnos" <<"\n";
            cout<<"Usted tiene una clasificacion de " <<clasificacion <<"\n";
            if (porcentaje <  60){
                cout<<"El grupo requiere seguimiento \n";
            }
            else {
                cout<<"El grupo tiene una asistencia aceptable \n";
            }
        }
#endif