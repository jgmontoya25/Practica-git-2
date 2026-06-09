//Calificaciones por alumno y unidad
//22-05-2026
//Gualberto Montoya
//Desarrolla un programa que almacene los datos en una matriz de 4 filas (alumnos) y 3 columnas (unidades).

#include <iostream>
    using namespace std;
        int main(){
            //Declaracion de variables
            float calificaciones[4][3];
            float total = 0.0;
            float promedio = 0.0;
            //Proceso
            for (int i = 0; i < 4; i++){
                cout<<"Datos del alumno " <<i+1 <<"\n";
                for (int j = 0; j < 3; j++)
                {
                    cout<<"Calificacion de unidad " << j+1 <<"\n";
                    cin>>calificaciones[i][j];
                }
                cout<<"\n";
            }
            for (int i = 0; i<4;i++){
                cout<<"Resultados del alumno " <<i+1 <<"\n";
                total = 0.0;
                for (int j = 0; j < 3; j++)
                {
                    cout<<"Unidad " <<j+1 <<": " <<calificaciones[i][j] <<" ";
                    total += calificaciones[i][j];
                }
                promedio = total / 3;
                cout<<"\n Promedio alumno " <<i+1 <<": " <<promedio <<"\n";
                cout<<"-----------------------------------------------\n";
            }
            return 0;
        }
