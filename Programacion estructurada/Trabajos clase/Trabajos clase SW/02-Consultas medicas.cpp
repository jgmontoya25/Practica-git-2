//Consultas medicas
//Gualberto Montoya
//26-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                //Declaracion de variables
                int opc;
                int edad;
                int desc;
                int precio;
                //Entradas
                cout<<"Seleccione una opcion \n 1 Consulta general \n 2 Consulta especialista \n 3 Urgencias" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"El costo de su consulta es de $500" <<"\n";
                    break;
                case 2:
                    cout<<"El costo de su consulta es de $800" << "\n";
                    break;
                case 3:
                    cout<<"Que edad tiene? " << "\n";
                    cin >> edad;
                    if (edad >= 60){
                    desc= 1200*0.20;
                    precio=1200-desc;
                    cout <<"El costo de su consulta es de " <<precio <<"\n";
                    }
                    else{
                    cout <<"El costo de su consulta es de $1200" <<"\n";}
                    break;
                default:
                    cout<<"Hasta pronto" <<"\n";
                    break;
                }
    return 0;            
            }