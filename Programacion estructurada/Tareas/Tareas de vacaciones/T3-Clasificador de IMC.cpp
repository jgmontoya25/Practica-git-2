//Clasificador de IMC
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int peso;
            
            cout<<"Cual es su masa corporal: " <<"\n";
            cin>>peso;
            if(peso <= 18.5){
                cout<<"Bajo peso" <<"\n";
            }
            else if(peso > 18.5 && peso <= 24.9){
                cout<<"Sobrepeso" <<"\n";
            }
            else{
                cout<<"Obesidad" <<"\n";
            }
            return 0;
        }