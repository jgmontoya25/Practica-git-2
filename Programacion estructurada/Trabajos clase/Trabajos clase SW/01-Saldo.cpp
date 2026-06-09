//Saldo
//Gualberto Montoya
//25-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int opc;
                cout<<"Seleccione una opcion \n 1 para consultar saldo \n 2 para retirar \n 3 para depositar" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"Tu saldo es de $1500" <<"\n";
                    break;
                case 2:
                    cout<<"Cuanto desea retirar?" << "\n";
                    break;
                case 3:
                    cout<<"Cuanto va a depositar?" << "\n";
                    break;
                default:
                    cout<<"Hasta pronto" <<"\n";
                    break;
                }
            }