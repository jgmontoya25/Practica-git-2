//Clave de acceso
//Gualberto Montoya
//04-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int conCorrec=20911;
                int contra;
                do
                {
                    cout<<"Ingrese su contraseña ";
                    cin >>contra;
                    if (contra!=conCorrec)
                        cout<<"Contraseña incorrecta!" <<"\n";
                    
                }
                while (contra != conCorrec);  
                cout<<"Contraseña correcta." <<"\n";
                
                return 0;
            }