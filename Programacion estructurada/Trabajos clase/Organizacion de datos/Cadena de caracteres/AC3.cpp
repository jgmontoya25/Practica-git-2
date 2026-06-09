//Longitud de caracteres
//26-05-2026
//Gualberto Montoya

#include <iostream>
#include <string.h>
    using namespace std;
        int main(){
            char cadena[100];
            cout<<"Digitalize su cadena: ";
            cin.getline(cadena,100);
            int longitud = strlen(cadena);
            if (longitud > 10){
                cout<<"La cadena introducida tiene: "<<longitud <<" caracteres de longitud \n";
            }else{
                cout<<"No se puede mostrar la cadena. \n";
            }
        return 0;
            
        }