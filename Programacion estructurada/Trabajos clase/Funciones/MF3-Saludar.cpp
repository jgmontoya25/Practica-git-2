//Saludar
//25-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
    void linea(int saludo){
        for(int j=0; j<saludo; j++){
        cout<<"Hola mundo, ";
        }
                cout<<"\n";
    }
        int main()
        {
            int numSalud;
            
            cout<<"Cuantos saludos necesita: ";
            cin>>numSalud;


            linea(numSalud);
        }