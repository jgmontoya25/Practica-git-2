//Categoria de Atleta
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int edad;
            
            cout<<"Cual es su edad: " <<"\n";
            cin>>edad;
            if(edad < 5){
                cout<<"No entra en categoria" <<"\n";
            }
            else if(edad >= 5 && edad <= 12){
                cout<<"Categoria: Infantil" <<"\n";
            }
            else if(edad >= 13 && edad <= 17){
                cout<<"Categoria: Juvenil" <<"\n";
            }
            else if(edad >= 18 && edad <= 59){
                cout<<"Categoria: Senior" <<"\n";
            }
            else{
                cout<<"Categoria: Veterano" <<"\n";
            }
            return 0;
        }