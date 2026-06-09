//Longitud de caracteres
//26-05-2026
//Gualberto Montoya

#include <iostream>
#include <string.h>
    using namespace std;
        int main(){
            char palabra[]="Jose Gualberto Montoya Bojorquez";
            int longitud;
            longitud = strlen(palabra);
            cout<<"----------------------------------------------------------------\n";
            cout<<"La longitud de la cadena " <<palabra <<" es " <<longitud <<"\n";
            cout<<"----------------------------------------------------------------\n";
            return 0;
        }