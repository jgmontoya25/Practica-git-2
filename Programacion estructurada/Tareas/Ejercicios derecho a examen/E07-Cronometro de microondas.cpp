//Cronometro de microondas
//12-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
            {
                int seg;
                cout<<"---BEEP---MICROONDAS INICIANDO---" <<"\n";
                for(seg = 60; seg >= 0; seg--)
                {
                    cout <<"Le restan " <<seg <<" segundos" <<"\n";
                }
                cout<<"Listo, comida esta caliente." <<"\n";
                return 0;
            }