//Menu de comida rapida
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int opc;
                cout<<"Seleccione una opcion para ver el precio \n 1.Hamburgesa \n 2.Pizza \n 3.Tacos \n 4.Ensalada" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"$120" <<"\n";
                    break;
                case 2:
                    cout<<"$159" << "\n";
                    break;
                case 3:
                    cout<<"$80" << "\n";
                    break;
                case 4:
                    cout<<"$180" << "\n";
                    break;
                default:
                    cout<<"Error, su opcion no esta en el menú" <<"\n";
                    break;
                }
            return 0;
        }