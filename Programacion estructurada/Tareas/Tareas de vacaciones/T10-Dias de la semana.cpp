//Dias de la semana
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int opc;
                cout<<"Seleccione una opcion\n 1-2-3-4-5-6-7" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"Lunes" <<"\n";
                    break;
                case 2:
                    cout<<"Martes" << "\n";
                    break;
                case 3:
                    cout<<"Miercoles" << "\n";
                    break;
                case 4:
                    cout<<"Jueves" << "\n";
                    break;
                case 5:
                    cout<<"Viernes" << "\n";
                    break;
                case 6:
                    cout<<"Sabado" << "\n";
                    break;
                case 7:
                    cout<<"Domingo" << "\n";
                    break;
                default:
                    cout<<"Error, su opcion no esta en las opciones" <<"\n";
                    break;
                }
            return 0;
        }