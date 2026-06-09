//Dias de la semana
//Gualberto Montoya
//12-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int opc;
                cout<<"Seleccione una opcion del 1 al 7" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"LUNES" <<"\n";
                    break;
                case 2:
                    cout<<"MARTES" << "\n";
                    break;
                case 3:
                    cout<<"MIERCOLES" << "\n";
                    break;
                case 4:
                    cout<<"JUEVES" << "\n";
                    break;
                case 5:
                    cout<<"VIERNES" << "\n";
                    break;
                case 6:
                    cout<<"SABADO" << "\n";
                    break;
                case 7:
                    cout<<"DOMINGO" << "\n";
                    break;
                default:
                    cout<<"Error, la semana solo cuenta con 7 días" <<"\n";
                    break;
                }
    return 0;            
            }