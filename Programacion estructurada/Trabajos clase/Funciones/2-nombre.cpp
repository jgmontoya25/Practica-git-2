#include <iostream>
    using namespace std;
        //declaracion de la funcion
    void saludar(){
        cout<<"Hola, Soy José Gualberto Montoya Bojórquez" <<"\n";
        }
    void linea(){
        for (int i=0; i<43; i++){
        cout<<"-";
        }
    }
    int main(){
        //llamada a la funcion
        saludar();
        linea();
        return 0;
    }