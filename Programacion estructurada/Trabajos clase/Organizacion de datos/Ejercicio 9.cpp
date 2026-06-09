//
//
//

#include <iostream>
#include <string>
    using namespace std;
        int main(){
            float temperaturas[7];
            float suma = 0, promedio, mayor;
            int diaMayor;
            string dias[7] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
            cout<<"Inicio de registro de temperaturas \n";
            for(int i = 0; i<7;i++){
                cout<<"Ingrese temperatura de "<<dias[i]<<": ";
                cin>>temperaturas[i];
                suma +=temperaturas[i];
            }
            //calcular promedio
            promedio = suma / 7;
            //Inicializar mayor venta
                mayor = temperaturas[0];
            //Buscar venta mayor
                for(int i=1;i<7;i++){
                    if (temperaturas[i]>mayor)
                    {
                        mayor = temperaturas[i];
                        diaMayor = i;
                    }
                    
                }
            //Monstrar resultados
            cout<<"--------------------\n";
            cout<<"Promedio semanal: "<<promedio<<" grados\n";
            cout<<"Temperatura mayor: " <<mayor <<" grados\n";
            cout<<"Dia de mayor temperatura: " <<diaMayor <<"\n";
            cout<<"--------------------\n";
        return 0;
    }