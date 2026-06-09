//Verificador de edad legal
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int edad;
            int difEdad;
            
            cout<<"La edad requerida para este tramite es de +18." <<"\n";
            cout<<"Cual es su edad: " <<"\n";
            cin>>edad;
            if (edad < 18){
                difEdad = 18 - edad;
                cout<<"Usted necesita " <<difEdad <<" años mas para realizar el tramite." <<"\n";
            }
            else{
                cout<<"Usted tiene acceso" <<"\n";
            }
            return 0;
        }