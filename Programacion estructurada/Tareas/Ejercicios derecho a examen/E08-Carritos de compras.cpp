//Carrito de compras
//12-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
            {
                int product;
                float precio;
                float total = 0;
                cout<<"Escane un maximo de 6 prodcutos" <<"\n";
                for (product=1; product <= 6; product++)
                {
                    cout<<"Introduzca el precio de su producto " <<product <<":";
                    cin >> precio;
                    total = total + precio;
                }
                    cout <<"Su pago total sera $" <<total <<"\n";
    return 0;
            }