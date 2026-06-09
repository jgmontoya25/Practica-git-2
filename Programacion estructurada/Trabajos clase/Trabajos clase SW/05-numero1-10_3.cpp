//Multiplos de tres o fuera del rango de 1.10
//Gualberto Montoya
//26-02-2026

#include <iostream>
    using namespace std;
        int main()
            {
                //Declaracion de variables
                int num;
                //Entradas
                cout <<"Ingrese su numero entre 1 al 10" <<"\n";
                cin >>num;
                switch (num) {
                    case 3:
                    case 6:
                    case 9:
                    cout << num << " Es multiplo de 3." << "\n";
                    break;
                    case 1:
                    case 2:
                    case 4:
                    case 5:
                    case 7:
                    case 8:
                    case 10:
                    cout << num << " No es multiplo de 3." << "\n";
                    break;
                    default:
                    cout << "El numero ingresado no esta entre 1 y 10." << "\n";
                    break;
                }
    return 0;            
            }