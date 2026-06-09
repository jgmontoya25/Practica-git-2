//Bateria del celular
//12-03-2026
//Gualberto Montoya

#include <iostream>
    using namespace std;
        int main()
        {
            int battery = 95;
            while (battery <= 100)
            {
                cout<<"[Fast Charge] Battery: " <<battery <<"% [simbolo : rayo]" <<"\n";
                battery++;
            }
            cout <<"Charger complete. Please disconect the phone." <<"\n";
    return 0;
        }