//Impresion de numeros
//Gualberto Montoya
//06-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int contador;
                int num;
                cout<<"ingrese hasta que numero quiere imprimir " <<"\n";
                cin >> num;
                for (contador=1; contador <= num; contador++)
                    cout<<contador <<" ";
    return 0;
            }