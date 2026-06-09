//NIP de cajero automatico
//12-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
            {
                int nip;
                int nipCorrect = 2411;
                do
                {
                    cout<<"INTERFAZ BANCARIA" <<"\n";
                    cout<<"Ingrese su nip de 4 digitos: ";
                    cin>>nip;
                    if (nip != nipCorrect)
                    {
                        cout<<"NIP incorrecto, imposible accesar." <<"\n";
                    }
                } while (nip != nipCorrect);
                    cout<<"NIP aceptado" <<"\n";
    return 0;
                
            }