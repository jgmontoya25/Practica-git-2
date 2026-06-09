//Deducir cual de 3 numeros es mayor
//13-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        float mayor(float num1, float num2, float num3){
            if (num1 > num2 && num1 > num3)
                    return num1;
            else if (num2 > num1 && num2 > num3)
                    return num2;
            else 
                    return num3;
        }
        int main(){
                float num1, num2, num3;            
                cout <<"Ingrese numero 1 " <<"\n";
                cin >> num1;
                cout <<"Ingrese numero 2 " <<"\n";
                cin >> num2;
                cout <<"Ingrese numero 3 " <<"\n";
                cin >> num3;
                cout<<"El mayor es ";
                cout<< mayor(num1,num2,num3) <<"\n";
            return 0;
        } 