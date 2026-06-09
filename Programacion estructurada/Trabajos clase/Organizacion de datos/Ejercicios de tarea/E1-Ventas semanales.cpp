//Registro de ventas
//22-05-2026
//Gualberto Montoya
//Desarrolla un programa que almacene en un arreglo las ventas 
//diarias, calcule el total, el promedio y determine la venta más alta.

#include <iostream>
#include <string>
    using namespace std;
        int main(){
            //Declaracion de variables
            float ventas[7];
            string dias[7] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
            float total = 0.0;
            float promedio = 0.0;
            float ventaMayor = 0.0;
            //Proceso
            for(int i = 0; i < 7; i++){
                cout<<"Ingrese la venta del día " <<dias[i] <<": $";
                cin>>ventas[i];
                total += ventas[i];
                if(ventas[i]>ventaMayor){
                    ventaMayor = ventas[i];
                }
            }
            promedio = total / 7;
            //Resultados
            cout<<"--------------------------------------------------\n";
            cout<<"Total vendido en la semana es: $" <<total <<"\n";
            cout<<"--------------------------------------------------\n";
            cout<<"Promedio de venta diaria es de: $" <<promedio <<"\n";
            cout<<"--------------------------------------------------\n";
            cout<<"La venta mayor fue " <<ventaMayor <<"\n";
            cout<<"--------------------------------------------------\n";
        }