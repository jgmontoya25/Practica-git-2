//tablas de multiplicar
//Gualberto Montoya
//06-03-2026

#include <iostream>
    using namespace std;
        int main()
            {
                int num;
                int tabla;
                for (tabla=1; tabla <= 10; tabla++)
                for (num = 1; num <=10; num++)
                    cout<< tabla <<"x" <<num <<"=" <<tabla * num <<"\n";
    return 0;
            }