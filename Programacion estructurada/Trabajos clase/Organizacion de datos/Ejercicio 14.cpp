//Arreglo multidimensionales
//21-05-2026
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
            bool simetrica = false;
            if (filas==columnas){
                for(int i=0;i<filas;i++){
                    for(int j=0;j<columnas;j++){
                        if(matriz[i][j]==matriz[j][i]){
                            simetrica = true;
                            break;
                            }
                        }
                    }
                }
                else{
                simetrica=false;
            }
            //mostrar resultados
            if(simetrica==true){
                cout<<"Su matriz es simetrica. \n";
            }else{
                cout<<"Su matriz no es simetrica. \n";
            }
            cout<<"La matriz original es: \n";
            for (int i = 0; i < filas; i++)
            {
                for (int j = 0; j < columnas; j++)
                {
                    cout<<matriz[i][j] <<" ";
                }
                cout<<"\n";
            }
            cout<<"La matriz traspuesta es: \n";
            for (int j = 0; j < columnas; j++)
            {
                for (int i = 0; i < filas; i++)
                {
                    cout<<matriz[i][j] <<" ";
                }
                cout<<"\n";
            }
            return 0;
        }       