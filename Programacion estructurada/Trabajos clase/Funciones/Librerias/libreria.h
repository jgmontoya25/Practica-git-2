//Mi primera libreria
//15-04-2026
//Gualberto Montoya
#ifndef LIBRERIA_H
#define LIBRERIA_H
#include <iostream>
    using namespace std;
void saludar(){
        cout<<"Hola, Soy José Gualberto Montoya Bojórquez" <<"\n";
        }
void linea(int n){
        for (int i=0; i<n; i++){
        cout<<"-";
        }
        }
void tabla5(){
                int tabla;
                for (tabla=1; tabla <= 10; tabla++){
                    cout<<"5 x " <<tabla <<" = " << 5* tabla <<"\n";
                }
            }
void guion(int ren, int guiones){
        for (int i=0; i<ren; i++){
            for(int j=0; j<guiones; j++){
        cout<<"-";
        }
                cout<<"\n";
    }
}
void calculo(int numUno, int numDos){
        int resultado = numUno * numDos;
        cout<<numUno <<" * " <<numDos <<" = " <<resultado;
    }
void dibRec(int ancho, int alto){
            for (int i = 0; i < alto; i++){
                for (int j = 0; j < ancho; j++){
                    cout<<"?";
                }
                cout<<"\n";
            }
        }
float mayor(float num1, float num2, float num3){
            if (num1 > num2 && num1 > num3)
                    return num1;
            else if (num2 > num1 && num2 > num3)
                    return num2;
            else 
                    return num3;
        }
float cubo (float num){
            return num * num * num;
        }
int suma (int num1, int num2){
            return num1 + num2;
        }
float signo(float num){
            if (num < 0){
                return -1;
            }
            else if (num > 0){
                return 1;
            }
            else {
                return 0;
            }
        }
int multi (int num1, int num2){
            return num1 * num2;
        }
int divi (int num1, int num2){
            return num1 / num2;
        }
int resta (int num1, int num2){
            return num1 - num2;
        }
#endif