//Promedio de calificaciones
//22-05-2026
//Gualberto Montoya
//Crea un programa que guarde 10 calificaciones, calcule el promedio general y 
//cuente cuántos estudiantes aprobaron (calificación ≥ 70).

#include <iostream>
    using namespace std;
        int main(){
            //Declaracion de variables
            float calificaciones[10];
            float promedio = 0.0;
            float total = 0.0;
            int aprobados = 0;
            //Proceso
            for(int i = 0; i < 10; i++){
                cout<<"Ingrese la calificacion " << i+1 <<" \n";
                cin>>calificaciones[i];
                total += calificaciones[i];
                if(calificaciones[i] >= 7){
                    aprobados++;
                }
            }
            promedio = total / 10;
            //Resultados
            cout<<"-------------------------------------------------------\n";
            cout<<"El promedio general es: " <<promedio <<"\n";
            cout<<"-------------------------------------------------------\n";
            cout<<"El total de alumnos que aprobaron es: " <<aprobados <<"\n";
            cout<<"-------------------------------------------------------\n";
        }