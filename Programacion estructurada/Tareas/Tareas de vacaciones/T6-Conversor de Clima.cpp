//Conversor de Clima
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int opc;
            double cels;
            double fahr;
                cout<<"Seleccione una opcion segun requiera \n 1.Celsius a Fahrenheit \n 2.Fahrenheit a Celsius" <<"\n";
                cin >> opc;
                switch (opc)
                {
                case 1:
                    cout<<"Ingrese su temperatura en Celsius" <<"\n";
                    cin>> cels;
                    fahr = (cels * 9/5) + 32;
                    cout<<"Su temperatura en Fahrenheit es de \n" <<fahr <<"\n";
                    break;
                case 2:
                    cout<<"Ingrese su temperatura en Fahrenheit" <<"\n";
                    cin>> fahr;
                    cels = (fahr - 32) * 5/9;
                    cout<<"Su temperatura en Celsius es de \n" <<cels <<"\n";
                    break;
                default:
                    cout<<"Error" <<"\n";
                    break;
                }
            return 0;
        }