//
//
//

#include <iostream>
    using namespace std;
        int main(){
            double num[30], multi=1;
            int n;

            cout<<"Cuantas posiciones quieres que tenga el vector? \n";
            cin>>n;
            for (int i=0;i<n;i++){
                cout<<"Ingrese el valor de la posicion " <<i+1<<": \n";
                cin>>num[i];
                multi *= num[i];
            }
            cout<<"El resultado de la multiplicacion es de "<<multi <<"\n";

        return 0;
        }