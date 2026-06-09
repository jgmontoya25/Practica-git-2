//Sueldo de un trabajador
//Gualberto Montoya
//19-02-2026

#include <iostream>

using namespace std;

    int main()
        {
            //Declaracion de variables
                int horasTotales;
                int sueldoBase;
                int bono;
                int pagoTotal;
            //Entradas
                cout <<"Ingrese el total de horas trabajadas " <<"\n";
                cin >> horasTotales;
                cout <<"Ingrese el sueldo base " <<"\n";
                cin >> sueldoBase;
            //Proceso
                if (horasTotales>=200)
                {bono = horasTotales * 0.15;
                pagoTotal =bono + sueldoBase;}
                else
                pagoTotal=sueldoBase;
                cout <<"Su pago es de " <<pagoTotal <<"\n";
                
            return 0;        
                    
        }