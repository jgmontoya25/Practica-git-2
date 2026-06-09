//Negativo, positivo, 0
//Gualberto Montoya
//02-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int num;

                cout << "Teclea un numero (0 para salir)";
                cin >> num;
                while (num!=0)
                {
                    if (num > 0)
                        cout << "Es positivo" <<"\n";
                    else
                        cout << "Es negativo" <<"\n";
                    cout << "Teclea otro numero (0 para salir)";
                    cin >> num;
                }
                return 0;
            }