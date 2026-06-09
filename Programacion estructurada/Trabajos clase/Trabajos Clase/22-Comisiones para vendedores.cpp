//Comisiones de los vendedores
//Gualberto Montoya
//20-02-2026

#include <iostream>
using namespace std;
    int main()
    {
        //Declaracion de variables
        int venta;
        int comision;
        //datos de entrada
        cout << "Cual fue la venta del vendedor " <<"\n";
        cin >> venta;
        //proceso
        if (venta > 50000 )
        {
            comision = venta * .10;
            cout<< "Su comisión es del 10% " "le tocan " <<comision <<"\n";
        }
        else if (venta >= 20000 && venta <= 50000)
        {
            comision = venta * .05;
            cout << "Su comisión es del 5% " "le tocan " <<comision <<"\n";
        }
        else if (venta < 20000)
        {
            cout << "No recibe comisión" <<"\n";
        }

     return 0;
        
    }