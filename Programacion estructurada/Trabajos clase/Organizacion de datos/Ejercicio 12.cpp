//Arreglo multidimensionales
//20-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main(){
            int numeros[2][2];
            cout<<"\nIngrese los elementos de su matriz de (2x2):\n";
            for(int i = 0; i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<"Elemento [" <<i+1 <<"]["<<j+1<<"]: ";
                    cin>>numeros[i][j];
                }
            }
            //Copiar matriz
            int numerosCopia[2][2];
            for(int i = 0; i<2;i++){
                for(int j=0;j<2;j++){
                    numerosCopia[i][j] = numeros[i][j];
                }
            }
            //Mostrar resultados
            cout<<"La matriz copiada es:\n";
            for(int i = 0; i<2;i++){
                for(int j=0;j<2;j++){
                    cout<<numerosCopia[i][j] <<" ";
                }
                cout<<"\n";
        }
    }