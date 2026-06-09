//Operaciones basicas
//14-04-2026
//Gualberto Montoya

#include <iostream>
#include "libreria.h"
using namespace std;
int main(){
    saludar();
    linea(43); cout<<"\n";
        int num1;
        int num2;
        cout<<"Operaciones basicas para dos numeros" <<"\n";
        linea(36); cout<<"\n";
        cout<<"Ingrese su primer numero \n ";
        cin>>num1;
        cout<<"Ingrese su segundo numero \n ";
        cin>>num2;
        cout<<"El resultado en suma es ";
        cout<<suma(num1,num2) <<"\n";
        linea(27); cout<<"\n";
        cout<<"El resultado en multiplicacion es ";
        cout<<multi(num1,num2) <<"\n";
        linea(36); cout<<"\n";
        cout<<"El resultado en division es ";
        cout<<divi(num1,num2) <<"\n";
        linea(30); cout<<"\n";
        cout<<"El resultado en resta es ";
        cout<<resta(num1,num2) <<"\n";
        linea(27); cout<<"\n";
return 0;
}