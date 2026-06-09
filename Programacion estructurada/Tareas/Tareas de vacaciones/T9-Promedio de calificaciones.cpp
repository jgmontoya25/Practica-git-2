//Promedio de calificaciones
//07-04-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
            {
                int almns;
                double calf;
                double sumCalf = 0.0;
                double promedio;

                cout<<"¿Cuantos alumnos hay?" <<"\n";
                cin>> almns;

                for (int i=1; i <= almns; i++)
                {
                    cout<<"¿Cual es la calificacion del alumno?" <<"\n";
                    cin>>calf;

                    sumCalf += calf;
                }
                promedio = sumCalf / almns;
                cout<<"El promedio del grupo es " <<promedio <<"\n";
                return 0;
            }