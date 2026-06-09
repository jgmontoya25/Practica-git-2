//Arreglo multidimensionales
//20-05-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main(){
            int columnas;
            int filas;
            cout<<"Ingrese su numero de filas: \n";
            cin>>filas;
            cout<<"Ingrese su numero de columnas: \n";
            cin>>columnas;
            int matriz[filas][columnas];
            cout<<"\nIngrese los elementos de su matriz:\n";
            for(int i = 0; i<filas;i++){
                for(int j=0;j<columnas;j++){
                    cout<<"Elemento [" <<i+1 <<"]["<<j+1<<"]: ";
                    cin>>matriz[i][j];
                }
            }
            //Mostrar los resultados
            cout<<"\nLa matriz ingresada es: \n";
            for(int i = 0; i<filas;i++){
                for(int j=0;j<columnas;j++){
                    cout<<matriz[i][j]<<"";
                }
                    cout<<"\n";
            }
            return 0;
        }