//Sensor de riego
//12-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
            {
                int val;
                cout<<"INICIANDO SISTEMA DE RIEGO" <<"\n";
                cout<<"Por favor indicame tu nivel de humedad en una escala de 0-100: ";
                cin >> val;
                while (val < 100){
                    cout <<"Humedad critica ("<< val <<"%). Bomba de agua: activa. " <<"\n";
                    val += 15;
                    cout <<"Regando... Nueva humedad: " <<val <<"%" <<"\n";
                }
                cout <<"Su nivel de humedad es optimo. Bomba: desactivada." <<"\n";
    return 0;
            }