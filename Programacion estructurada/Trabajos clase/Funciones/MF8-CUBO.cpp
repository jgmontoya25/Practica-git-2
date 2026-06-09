//Cubo
//14-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float cubo (float num){
            return num * num * num;
        }
    int main(){
        float num;
        cout<<"Ingrese su numero" <<"\n";
        cin>> num;
        cout<<"Su resultado es ";
        cout<< cubo(num) <<"\n";
    return 0;
    }