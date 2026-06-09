//Ejemplo 2
//30-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main(){
            float num[4];
            float suma = 0.0 ;
            float promedio;
                for (int i = 0; i < 4; i++){
                    cout<<"Ingrese número " <<i + 1 <<": ";
                    cin>> num[i];
                    suma += num[i];
                }
            promedio = suma / 4;

            cout<<"\nLos numeros ingresados son: ";
                for (int i = 0; i < 4; i++){
                    cout<<num[i] <<" ";
                }
            cout<<"\nEl promedio es: " <<promedio <<"\n";
        return 0;
        }
