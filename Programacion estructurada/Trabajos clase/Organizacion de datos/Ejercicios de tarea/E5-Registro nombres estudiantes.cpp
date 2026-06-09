//Registro de nombres de estudiantes
//22-05-2026
//Gualberto Montoya
//Solicita el nombre completo de 5 estudiantes y muéstralos en una lista numerada.
#include <iostream>
#include <string>
    using namespace std;
        int main(){
            //Declaracion de variables
            string nombre[5];
            //Proceso
            for(int i = 0; i < 5; i++){
                cout<<"Ingrese el nombre completo del estudiante " <<i+1 <<"\n";
                getline(cin, nombre[i]);
            }
            cout<<"\n";
            cout<<"Su lista de estudiantes: \n";
            for(int i=0; i<5;i++){
                cout<<i+1 <<". " <<nombre[i] <<"\n";
            }
            return 0;
        }