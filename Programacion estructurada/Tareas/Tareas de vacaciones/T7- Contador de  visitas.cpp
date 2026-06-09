//Contador de visitas
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int edad;
            int cont_menor = 0;

            cout<<"Ingrese la edad del visitante (ingrese 0 para terminar): " <<"\n";
            cin>>edad;

            while (edad != 0)
            {
                if (edad > 0 && edad < 18){
                    cont_menor++;
                }
                cout<<"Ingrese la edad del siguiente visitante (recuerde ingresar 0 para terminar): " <<"\n";
                cin>>edad;
            }
            cout<<"Los visitantes menores edad fueron " <<cont_menor <<"\n";

        return 0;            
        }