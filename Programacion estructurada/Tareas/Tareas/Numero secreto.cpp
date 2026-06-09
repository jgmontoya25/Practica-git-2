//
//
//

#include <iostream>
    using namespace std;
        int main()
        {
            int contra;
            int contraCorrec = 2014;
            int cont=0;
            while (cont < 3)
            {
            cout<<"PODRA ATINARLE? PRUEBA TU SUELTE " <<"\n";
            cin>>contra;
           if (contra == contraCorrec){
            cout<<"FELICIDADE LE ATINATE" <<"\n";
            break;
           }
            else {
                cont++;}
            if (cont < 3){
            cout<<"FALLATE, INTENTA DE NEW" <<"\n";}
                else {
                    cout<<"FALLATE TANTO QUE LO BLOQUEATE" <<"\n";
                }
            }
        return 0;
        }