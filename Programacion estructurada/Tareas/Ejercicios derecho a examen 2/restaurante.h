//Libreria restaurante
//05-05-2026
//Gualberto Montoya

#include <iostream>
#include <string>
    using namespace std;
        float calcSubTot(int platillos){
            float subTot = 0.0;
            float precio = 0.0;
            for (int i = 0; i < platillos; i++){
                cout<<"Ingrese el precio de su platillo: \n";
                cin>>precio;
                subTot += precio;
            }
            return subTot;
        }
        float calcPropina(float subTot){
            float propina;
            return propina = subTot * 0.10;
        }
        string evaluarCuenta(float subTot){
            if (subTot > 800){
                return "Alta \n"; 
            }
            else {
                return "Normal \n";
            }
        }
