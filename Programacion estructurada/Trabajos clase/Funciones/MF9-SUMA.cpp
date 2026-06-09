//Suma
//14-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int suma (int num1, int num2, int num3){
            return num1 + num2 + num3;
        }
    int main(){
        int num1;
        int num2;
        int num3;
        cout<<"Ingrese su primer numero \n ";
        cin>>num1;
        cout<<"Ingrese su segundo numero \n ";
        cin>>num2;
        cout<<"Ingrese su tercer numero \n ";
        cin>>num3;
        cout<<"El resultado de su suma es ";
        cout<<suma(num1,num2,num3) <<"\n";
    return 0;
    }