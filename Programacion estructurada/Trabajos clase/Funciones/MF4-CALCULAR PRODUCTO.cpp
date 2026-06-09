//Productos
//25-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
    void calculo(int numUno, int numDos){
        int resultado = numUno * numDos;
        cout<<numUno <<" * " <<numDos <<" = " <<resultado;
    }
        int main()
        {
            int val1;
            int val2;
            cout<<"Ingrese su primer valor: " <<"\n";
            cin>>val1;
            cout<<"Ingrese su segundo valor: " <<"\n";
            cin>>val2;
            calculo(val1,val2);
            cout<<"\n";
        return 0;
        }
