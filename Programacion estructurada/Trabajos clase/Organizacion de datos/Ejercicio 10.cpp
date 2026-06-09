//Arreglo multidimensionales
//20-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main(){
            int numeros[2][3]={{1,2,3},{4,5,6}};
            //Mostrar resultados de la matriz
            cout<<"\nLa matriz ingresada es:\n";
            for(int i = 0; i<2;i++){
                for(int j=0;j<3;j++){
                    cout<<numeros[i][j]<<"";
                }
                    cout<<"\n";
            }
            return 0;
        }