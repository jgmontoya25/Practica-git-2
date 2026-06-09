//
//
//

#include <iostream>
#include <string>
    using namespace std;
        int main(){
            float ventas[7];
            float total = 0;
            float mayorVenta;
            int diaMayor;
            string dias[7] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
            cout<<"Inicio de registro de ventas \n";
            for(int i = 0; i<7;i++){
                cout<<"Ingrese venta de "<<dias[i]<<": ";
                cin>>ventas[i];
                total+=ventas[i];
            }
            //Inicializar mayor venta
                mayorVenta = ventas[0];
            //Buscar venta mayor
                for(int i=1;i<7;i++){
                    if (ventas[i]>mayorVenta)
                    {
                        mayorVenta = ventas[i];
                        diaMayor = i;
                    }
                    
                }
            //Monstrar resultados
            cout<<"--------------------\n";
            cout<<"Total semanal: $"<<total<<"\n";
            cout<<"Mayor venta: $" <<mayorVenta <<"\n";
            cout<<"Dia de mayor venta: " <<diaMayor <<"\n";
            cout<<"--------------------\n";
        return 0;
    }