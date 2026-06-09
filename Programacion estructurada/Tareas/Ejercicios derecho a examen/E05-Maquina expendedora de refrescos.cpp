//Refrescos
//Gualberto Montoya
//12-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                char tecla;
                cout<<"Seleccione una tecla \n A-Coca-Cola \n B-Sprite \n C-Agua Mineral" <<"\n";
                cin >> tecla;
                switch (tecla)
                {
                case 'A':
                    cout<<"Correcto, entregando Coca-Cola" <<"\n";
                    break;
                case 'B':
                    cout<<"Correcto, entregando Sprite" << "\n";
                    break;
                case 'C':
                    cout<<"Correcto, entregando agua mineral" << "\n";
                    break;
                default:
                    cout<<"Su tecla no existe, intente de nuevo" <<"\n";
                    break;
                }
    return 0;            
            }