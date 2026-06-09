//
//
//

#include <iostream>
    using namespace std;
        int main()
        {
                int codigo;
                int codCorrec=1234;
                string contra;
                string contraCorrec = "taliban";
                int cont = 0;
                do
                {
                    cout<<"Ingrese su codigo " <<"\n";
                    cin >>codigo;
                    cout<<"Ingrese su contraseña " <<"\n";
                    cin >>contra;
                    if (codigo==codCorrec && contra==contraCorrec){
                        
                        cout<<"Codigo correcto!" <<"\n";
                        cout<<"Contraseña correcta!" <<"\n";
                        break;
                    }
                    else {
                        cont ++;
                        if (cont < 3){
                            cout<<"Intente de nuevo: " <<"\n";
                        }
                        else {
                            cout <<"Usuario bloqueado, intente en 24 horas." <<"\n";
                            break;
                        }
                    }
                    
                }
                while (cont < 3);  
                //cout<<"Contraseña correcta." <<"\n";
                
                return 0;
            }