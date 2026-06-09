//Clave de acceso por 3 intentos
//Gualberto Montoya
//04-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                string conCorrec = "taliban";
                string contra;
                int intentos = 0;
                do
                {
                    cout<<"Ingrese su contraseña ";
                    cin >>contra;
                    if (contra==conCorrec){
                        cout<<"Contraseña correcta!" <<"\n";
                        break;
                    }
                    else {
                        intentos ++;
                        if (intentos < 3){
                            cout<<"Intente de nuevo: " <<"\n";
                        }
                        else {
                            cout <<"Usuario bloqueado" <<"\n";
                            break;
                        }
                    }
                    
                }
                while (intentos < 3);  
                //cout<<"Contraseña correcta." <<"\n";
                
                return 0;
            }