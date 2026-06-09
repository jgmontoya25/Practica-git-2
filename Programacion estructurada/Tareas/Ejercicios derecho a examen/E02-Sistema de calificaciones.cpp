//Desempeño academico del alumno en rangos A,B,C,F
//Gualberto Montoya
//12-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int calf;
                cout<<"Cual es su calificacion en un rango de 0-100" <<"\n";
                cin>>calf;
                if (calf >= 90 && calf <= 100)
                {
                    cout<<"Su rango es A" <<"\n";
                }
                else if (calf >= 80 && calf <= 89)
                {
                    cout<<"SU rango es B" <<"\n";
                }
                else if (calf >= 70 && calf <= 79)
                {
                    cout<<"Su rango es C" <<"\n";
                }
                else 
                {
                    cout<<"Su rango es F" <<"\n";
                }
    return 0;
            }