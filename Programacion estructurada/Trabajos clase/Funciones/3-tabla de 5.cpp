#include <iostream>
    using namespace std;
    void saludar(){
        cout<<"Hola, Soy José Gualberto Montoya Bojórquez\nY esta es la tabla del 5" <<"\n";
        }
     void tabla5(){
                int tabla;
                for (tabla=1; tabla <= 10; tabla++){
                    cout<<"5 x " <<tabla <<" = " << 5* tabla <<"\n";
                }
            }
int main(){
    saludar();
    tabla5();
}