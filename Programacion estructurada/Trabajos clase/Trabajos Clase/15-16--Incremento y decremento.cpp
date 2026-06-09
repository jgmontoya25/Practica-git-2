//Incremento y decremento de 3 variables
//Gualberto Montoya
//17-02-2026

#include <iostream>

using namespace std;
 int main()
    {
        int x=15;
        int y=-10;
        double z=2.147;

    //proceso
    x++;y++;z++;
        cout << x <<"\n";
        cout << y <<"\n";
        cout << z <<"\n"; 
        cout <<"Preincremento y postincremento ejemplo" <<"\n";
    //Preincremento y postincremento ejemplo
        int a =2;
        int b;
        int c= 2;
        int d;
    //proceso ejemplo
        b=a++;
        d=++c;
        cout <<"a = " <<a <<"\n";
        cout <<"b = " <<b <<"\n";
        cout <<"c = " <<c <<"\n";
        cout <<"d = " <<d <<"\n";
        cout <<"Preincremento y postincremento" <<"\n";
    //Preincremento y postincremento
        int e =5;
        int f;
        int g;
    //proceso
        f=++e;
        cout <<"f es = " <<f <<"\n";
        g=e++;
        cout <<"g es = " <<g <<"\n";
        f=f*5;
        cout <<"f es = " <<f <<"\n";
        e=e*2;
        cout <<"e es = " <<e <<"\n";

return 0;
    }