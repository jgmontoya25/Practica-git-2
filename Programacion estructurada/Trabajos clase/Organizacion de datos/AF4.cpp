//Vectores
//12-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main(){
            int num[30];
            int n;
            int multi = 1;
            cout<<"Teclee numero de posiciones del vector: \n";
            cin>>n;
            for (int i = 0; i < n; i++){
                cout<<"Ingrese sus numeros " <<i + 1 <<": ";
                cin>> num[i];
                multi *= num[i];
            }
            cout<<"\nLos numeros ingresados son: \n";
            for (int i = 0; i < n; i++){
                cout<<num[i] <<"\n";
            }
            cout<<"La multiplicacion de estos numeros es: " <<multi <<"\n";
        return 0;
        }