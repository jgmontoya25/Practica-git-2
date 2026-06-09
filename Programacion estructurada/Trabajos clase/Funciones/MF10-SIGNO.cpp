//Signo
//14-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float signo(float num){
            if (num < 0){
                return -1;
            }
            else if (num > 0){
                return 1;
            }
            else {
                return 0;
            }
        }
    int main(){
        float num;
        cout<<"Ingrese su numero: " <<"\n";
        cin>>num;
        cout<<"Su signo es ";
        cout<< signo(num) <<"\n";
    }