/*Declaracion de variables*/
/*Gualberto Montoya*/
/*09-02-2026*/

#include <iostream>

using namespace std;

int main()
{
    //Declarar variables
    int entero=34;
    char caracter='M';
    float flotante=42.5f;
    double doble=3.14161;
    bool boleano=false;
    //Salida de variables
        cout <<"la variable entero=" <<entero <<"\n";
        cout <<"la variable caracter=" <<caracter <<"\n";
        cout <<"la variable flotante=" <<flotante <<"\n";
        cout <<"la variable doble=" <<doble <<"\n";  
        cout <<"la variable boleano=" <<boleano <<"\n";

    //Declaracion de variables
    int num1;
    int num2;
    int result;
    //Entradas
    cout <<"ingrese su primer valor " <<"\n";
    cin >> num1;
    cout <<"ingrese su segundo valor " <<"\n";
    cin >> num2;
    //Proceso
    result = num1 + num2;
    //salidas
    cout << "La suma de sus dos variables es " <<result <<"\n";
return 0;
}