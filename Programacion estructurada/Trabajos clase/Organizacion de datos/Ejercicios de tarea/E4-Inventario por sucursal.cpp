//Inventario por sucursal
//22-05-2026
//Gualberto Montoya
//Almacena las ventas en una matriz y calcula el total de productos vendidos por cada sucursal.
#include <iostream>
    using namespace std;
        int main(){
            int ventas[3][4];
            float total = 0.0;
                for (int i = 0; i < 3; i++){
                cout<<"Sucursal " << i+1 <<" \n";
                for (int j = 0; j < 4; j++)
                {
                    cout<<"Categoria " << j+1 <<"\n";
                    cin>>ventas[i][j];
                }
                cout<<"\n";
            }
                cout<<"Totales por sucursal \n";
                for (int i = 0; i<3;i++){
                total = 0.0;
                for (int j = 0; j < 4; j++)
                {
                    total += ventas[i][j];
                }
                cout<<"Sucursal " <<i+1 <<": " <<total <<" productos\n";                
            }
            return 0;
        }