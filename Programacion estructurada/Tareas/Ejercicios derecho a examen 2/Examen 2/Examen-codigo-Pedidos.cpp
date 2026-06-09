//Examen, hacer un codigo de pedidos de comida.
//07-05-2026
//Gualberto Montoya

#include <iostream>
#include "pedidos.h"
    using namespace std;
        int main(){
            int opc;
            float precio;
            int totPiezas;
            float totPagar;
            float envio;
            float pagoFinal;

            cout<<"Bienvenido al menú de Freddy's Restaurant \n";
            cout<<"Seleccciona tu producto\n1) Hamburguesa $85\n2) Pizza $120\n3) Ensalada $70\n4) Bebida $30\n";
            cin>>opc;
            precio = obtPrecio(opc);
            cout<<"Cuantas piezas lleva: ";
            cin>>totPiezas;
            totPagar = calAcumPagar (precio, totPiezas);
            envio = calcEnvio (totPagar);
            pagoFinal = totalPagar (totPagar,envio);
            cout<<"Precio unitario: " <<precio <<"\n";
            cout<<"Subtotal: "        <<totPagar <<"\n";
            cout<<"Envio: "           <<envio <<"\n";
            cout<<"Pago final: "      <<pagoFinal <<"\n"; 
        }