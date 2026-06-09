//Validacion de edad en app
//12-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
            {
                int edad;
                do
                {
                    cout <<"Ingrese su edad: ";
                    cin >> edad;
                    if (edad < 0)
                    {
                        cout<<"Syntax error: su edad no puede ser negativa. Intenta de nuevo." <<"\n";
                    }
                }
                while (edad < 0);
                cout <<"Edad registrada correctamente: " <<edad <<" años." <<"\n";
                return 0;
            }