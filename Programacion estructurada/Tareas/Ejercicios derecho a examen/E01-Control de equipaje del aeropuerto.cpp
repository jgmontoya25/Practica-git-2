//Peso de maleta
//Gualberto Montoya
//10-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                float peso;
                cout<<"Ingrese el peso de la maleta " <<"\n";
                cin>> peso;
                if (peso < 23)
                {
                    cout<<"Su costo sera de 0 pesos."<<"\n";
                }
                else if (peso >= 23 && peso <= 32)
                {
                    cout<<"Tiene un exceso de peso, se le debe cargar un costo extra." <<"\n";
                }
                else {
                    cout<<"Su maleta excede el limete, no cargar.";
                }
    return 0;
            }