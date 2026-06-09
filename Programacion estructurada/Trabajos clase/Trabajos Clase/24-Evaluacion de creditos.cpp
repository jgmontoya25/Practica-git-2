//Credito bancario
//Gualberto Montoya
//23-02-2026

#include <iostream>

    using namespace std;

        int main()
            {
                //Declarcion de variables
                int ingMen;
                //Solicitud de entradas
                cout << "Cual es su ingreso mensual: " <<"\n";
                    cin >> ingMen;
                //proceso
                    if (ingMen > 100000 )
                        {
                            cout<< "Se le aprueba un credito con tasa de interes del 5%" <<"\n";
                        }
                    else if (ingMen >= 50000 && ingMen <= 100000)
                        {
                            cout<< "Se le aprueba un credito con tada de interes del 10%" <<"\n";
                        }
                    else if (ingMen < 50000)
                        {
                            cout<< "Se rechaza su solicitud de credito por que sus ingresos son menores a 50000" <<"\n";
                        }

                return 0;
            }