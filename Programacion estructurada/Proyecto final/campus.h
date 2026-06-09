//Funciones de juegos
//28-05-2026
//Montoya Bojórquez José Gualberto
#ifndef CAMPUS_H
#define CAMPUS_H
#include <iostream>
    using namespace std;
        //Zona Biblioteca
            int biblioteca(int diasRetraso){
                int multa = diasRetraso * 15;
                cout<<"Multa calculada: $" <<multa <<"\n";
                if (diasRetraso == 0) return 10;
                else if (diasRetraso <= 3) return 5;
                return 0;
            }
        //Zona Cafeteria
            int cafeteria(int opc, int cantidad){
                int precios[]={0,50,35,20};
                int total = precios[opc] * cantidad;
                cout<<"Total de compra: $" <<total <<"\n";
                if (total>100){
                    cout<<"Compra grande.\n";
                    return 10;
                }
                return 10;
            }
        //Zona Laboratorio
            int laboratorio(float compuesto1, float compuesto2, float compuesto3){
                float promedio = (compuesto1 + compuesto2 + compuesto3) / 3;
                cout<<"Promedio obtenido: " <<promedio <<"\n";
                if (promedio >= 9.0) return 10;
                else if (promedio >= 7.0) return 5;
                return 2;
            }
        //Zona Estacionamiento
            int estacionamiento(float horas){
                int cobro = horas * 10;
                cout<<"Total a pagar de estacionamiento: $" <<cobro <<"\n";
                return (horas < 5) ? 10 : 5;
            }
        //Zona Control Escolar
            int controlEscolar(int numAlmns){
                cout<<"Se han registrado " <<numAlmns <<" alumnos en el sistema.\n";
                return (numAlmns > 30) ? 10 : 5;
            }
        //Zona Centro de Energia
            int cenEnergia(float kw){
                float costo = 0.0;
                costo = kw * 1.5;
                cout<<"Costo de energia estimado: $" <<costo <<"\n";
                if (kw < 100) return 10;
                return 5;
            }
        //Zona Tienda Universitaria
            int tienda(int objetos, float precioPz){
                float total = objetos * precioPz;
                cout<<"El total de sus articulos es: $" <<total <<"\n";
                return 10;
            }
        //Zona Sala Gamer
            int salaGamer(int punto1){
                int punto2 = rand() % 1000;
                int punto3 = rand() % 1000;
                cout<<"--------------------------------\n";
                cout<<"Tu puntaje es: " <<punto1 <<".\n";
                cout<<"Puntaje Rival 1: " <<punto2 <<".\n";
                cout<<"Puntaje Rival 2: " <<punto3 <<".\n";
                cout<<"--------------------------------\n";
                int maximo = punto1;
                if (punto2 > maximo) maximo = punto2;
                if (punto3 > maximo) maximo = punto3;
                cout<<"El puntaje mas alto fue: " <<maximo <<"\n";
                if (maximo >= 800) return 10;
                return 5; 
            }
        //Zona Transporte Escolar
            int transporte(int dias){
                int gasto = dias * 15;
                cout<<"El gasto semanal en transporte es: $" <<gasto <<"\n";
                return 10;
            }
        //Zona Concurso de programacion
            int concurso(int pntsEquipo1){
                int pntsEquipo2 = rand() % 100;
                cout<<"Tus puntos:" <<pntsEquipo1 <<".\n";
                cout<<"Los puntos de Martín Andrighettí:" <<pntsEquipo2 <<".\n";
                if (pntsEquipo1 > pntsEquipo2){
                    cout<<"Eres el ganador, Felicidades\n";
                    return 10;
                }else if (pntsEquipo2 > pntsEquipo1){
                    cout<<"Martín Andrighettí es el ganador, suerte para la proxima\n";
                    return 2;
                }else{
                    cout<<"===INCREIBLE EMPATE===\n";
                    return 5;
                }
                
            }
#endif