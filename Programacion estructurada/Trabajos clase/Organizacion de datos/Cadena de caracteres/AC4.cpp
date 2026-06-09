//Longitud de caracteres
//26-05-2026
//Gualberto Montoya

#include <iostream>
#include <string.h>
    using namespace std;
        int main(){
            char origen[50];
            char destino[50];
            cout<<"Digitalize su cadena: ";
            cin.getline(origen,50);
            strcpy(destino,origen);
            int longitud = strlen(destino);
            cout<<"-------------------------------------------------------------------------------------\n";
            cout<<"La caneda copiada es: " <<destino <<" con una longitud de " <<longitud <<" caracteres\n";
            cout<<"-------------------------------------------------------------------------------------\n";
        return 0;
            
        }