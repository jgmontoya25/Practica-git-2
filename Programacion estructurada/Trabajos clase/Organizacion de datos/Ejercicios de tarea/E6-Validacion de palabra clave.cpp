//Validacion de palabra clave
//22-05-2026
//Gualberto Montoya
//Crea un programa que valide la clave con un máximo de 3 intentos permitidos.

#include <iostream>
#include <string>
    using namespace std;
        int main(){
            //Declaracion de variables
            string clave = "";
            int intentos = 0;
            //Proceso
            cout<<"Bienvenido a su sistema universitario \n";
            while (clave != "UAS2026")
            {
                cout<<"Ingrese su clave de acceso: ";
                cin>>clave;
                intentos++;
                if (clave == "UAS2026"){
                    cout<<"Clavae correcta. Bienvenido al sistema.\n";
                }else{
                    cout<<"Clave incorrecta.\n";
                if (intentos == 3)
                {
                    cout<<"\nHas agotado tus intentos, sistema bloqueado.\n";
                    break;
                }else
                {
                    cout<<"Te quedan " <<3-intentos <<" intentos.\n";
                }
                               
            }
                
        }
        return 0;            
    }