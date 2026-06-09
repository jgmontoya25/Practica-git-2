//Ejemplo tres
//12-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main(){
            double numeros[5];
                cout<<"Ingrese el valor de su numero: \n";
                for (int i = 0; i < 5; i++){
                    cout<<"Numero " <<i + 1 <<": \n";
                    cin>>numeros[i];
                }
                cout<<"\nLos numeros en orden contrario son: \n";
                for (int i = 4; i >= 0; i--){
                    cout<<numeros[i] <<" \n";
                }
            return 0;
        }