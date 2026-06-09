//Libreria de cafeteria
//28-04-2026
//Gualberto Montoya

#ifndef CAFETERIA_H
#define CAFETERIA_H
#include <iostream>
    using namespace std;
        float obtPrecio(int opc){
            float precio;
            switch (opc)
            {
            case 1:
                precio = 35;
                break;
            case 2:
                precio = 25;
                break;
            case 3:
                precio = 30;
                break;
            default : cout<<"Opcion no valida.\n";
                break;
            }
            return precio;
        }
        float calAcumPagar(float precio, int totPiezas){
            float acumulado;
            for(int i = 1; i < totPiezas; i++){
                acumulado =+ precio * totPiezas;
            }
            return acumulado;
        }
        float calcDesc( int totPiezas, float acumulado){
            float desc;
            if (totPiezas >= 5){
                desc = acumulado * 0.12;
            }
            else{
                desc = 0;
            }
            return desc;
        }
        void resumen(float precio, int totPiezas, float acumulado, float desc){
                float total;
                total = acumulado - desc;
                cout<<"EL precio de su producto es de : $" <<precio <<"\n";
                cout<<"Su total es de : $" <<acumulado <<"\n";
                cout<<"Descuento de : $" <<desc <<"\n";
                cout<<"Su pago final es de : $" <<total <<"\n";
                if (totPiezas >= 5){
                    cout<<"Pedido por mayoreo, le aplica descuento, vuelva pronto." <<"\n";
                }
                else{
                    cout<<"Su pedido no aplica para descuento, vuelva pronto." <<"\n";
                }
        }
#endif