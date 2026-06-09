//Numeros en letras
//Gualberto Montoya
//26-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                //Declaracion de variables
                int opc;
                //Entradas
                cout<<"Seleccione una opcion \n 1,2,3,4,5,6,7,8,9,10" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"UNO" <<"\n";
                    break;
                case 2:
                    cout<<"DOS" << "\n";
                    break;
                case 3:
                    cout<<"TRES? " << "\n";
                    break;
                case 4:
                    cout<<"CUATRO" << "\n";
                    break;
                case 5:
                    cout<<"CINCO? " << "\n";
                    break;
                case 6:
                    cout<<"SEIS" << "\n";
                    break;
                case 7:
                    cout<<"SIETE" << "\n";
                    break;
                case 8:
                    cout<<"OCHO" << "\n";
                    break;
                case 9:
                    cout<<"NUEVE" << "\n";
                    break;
                case 10:
                    cout<<"DIEZ" << "\n";
                    break;
                default:
                    cout<<"No es un numero permitido" <<"\n";
                    break;
                }
    return 0;            
            }