//Contraseña numerica
//Gualberto Montoya
//02-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int contra;

                cout << "Teclea una contraseña numerica de cuatro digitos" <<"\n";
                cin >> contra;
                while (contra!= 4567)
                {
                    cout <<"Contraseña invalida, introduzca de nuevo" <<"\n";
                    cin >> contra;
                }    
                    cout<<"Bienvenido contraseña correcta" <<"\n";
                return 0;
            }