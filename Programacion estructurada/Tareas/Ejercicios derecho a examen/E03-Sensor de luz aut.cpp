//Sensor de luz
//Gualberto Montoya
//12-03-2026

//Objetios
//Si el nivel de luz detectado es inferior al 10%, el sistema procede a encender las lámparas; de lo contrario, las mantiene apagadas.

#include <iostream>
    using namespace std;
        int main()
            {
                int luz;
                cout<<"cual es su nivel de luz: " <<"\n";
                cin>> luz;
                if (luz < 10)
                {
                    cout<<"Se encenderan las lamparas" <<"\n";
                }
                else
                {
                    cout<<"Las lamparas se mantendran apagadas" <<"\n";
                }
    return 0;
            }