//Control de inventario
//Gualberto Montoya
//03-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int stock;
                int venta;
                cout<<"Ingrese su stock inicial " <<"\n";
                cin >>stock;
                while (stock > 0)
                {
                    cout <<"Cuantas unidades va a vender: " <<"\n";
                    cin >> venta;
                    if (venta > stock) 
                    {
                        cout <<"No hay inventario suficiente" <<"\n";
                        break;
                    }
                    else
                    {
                        stock = stock - venta;
                        cout <<"Venta fue realizada con exito, su stock restante es " <<stock <<"\n";
                        break;
                    }
                        cout <<"Su producto esta agotado" <<"\n";
                }
                    
    return 0;
            }