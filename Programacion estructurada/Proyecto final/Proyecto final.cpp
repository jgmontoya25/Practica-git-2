//Proyecto final
//28-05-2026
//Montoya Bojórquez José Gualberto

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "campus.h"
    using namespace std;
        struct Jugador{
                    string nombre;
                    string usuario;
                    string contraseña;
                    int energia = 150;
                    int puntosTotales = 0;
                };
            void encabezado(){
                cout<<"========================================\n";
                cout<<"======= Mini Aventura Del Campus =======\n";
                cout<<"========================================\n";
            }
        int main(){
            //Declaracion de variables
            Jugador jugador;
            string zonas[10]={
                "Biblioteca","Cafeteria","Laboratorio","Estacionamiento","Control Escolar","Centro de Energía","Tienda Universitaria","Sala Gamer","Transporte Escolar","Concurso de Programacion"
            };
            int puntosZona[10]={0,0,0,0,0,0,0,0,0,0};
            bool visitadas[10]={false, false, false, false, false, false, false, false, false, false};
            int diasRetraso;
            int opc, cantidad;

                //Proceso
                encabezado();
                cout<<"---Registro de jugador---\n";
                cout<<"Ingresa tu nombre: ";
                getline(cin, jugador.nombre);
                cout<<"Crea un Usuario: ";
                cin>>jugador.usuario;
                cout<<"Crea una contraseña: ";
                cin>>jugador.contraseña;
                cout<<"Registro completado. Presiona enter para continuar...\n";
                cin.ignore();
                cin.get();
                    string userLogin, passLogin;
                    int intentos=0;
                    bool accesoPermitido = false;
                    while (intentos<3 && !accesoPermitido)
                    {
                        cout<<"\n===INICIO DE SESION===\n";
                        cout<<"Usuario ";
                        cin>> userLogin;
                        cout<<"Contraseña :";
                        cin>>passLogin;
                            if (userLogin==jugador.usuario && passLogin==jugador.contraseña)
                            {
                                accesoPermitido = true;
                            }else{
                                intentos++;
                                cout<<"Contraseña incorrecta, intente de nuevo. Restan" <<3-intentos <<" intentos\n";
                            }     
                    }
                    if (!accesoPermitido)
                    {
                        cout<<"Sistema bloqueado. Fin del juego.\n";
                        return 0;
                    }
                    int opcMenu = 0;
                    while (opcMenu!=12 && jugador.energia>0)
                    {
                        cout<<"------------------------------------------\n";
                        cout<<"Acceso permitido. Bienvenido, " <<jugador.nombre <<".\n";
                        cout<<"\nEnergia: " <<jugador.energia<<"." <<" Puntos: " <<jugador.puntosTotales <<".\n";
                        cout<<"------------------------------------------\n";
                        cout<<"============ Zona del Campus ============\n";
                            for(int i=0; i<10; i++){
                                cout<<i + 1 <<". " <<zonas[i];
                                if (visitadas[i]) cout<<" Completado";
                                cout<<"\n";
                            }
                            cout<<"11. Ver estatus general\n";
                            cout<<"12. Salir del juego\n";
                            cout<<"ELige un reto: ";
                            cin>>opcMenu;
                                if (opcMenu>=1 && opcMenu <=10){
                                    int indice=opcMenu -1;
                                    if (visitadas[indice]){
                                        cout<<"---------------------------------------------\n";
                                        cout<<"Ya visitaste esta zona, intenta de nuevo ;)\n";
                                        cout<<"---------------------------------------------\n";
                                        continue;
                                    }
                                    int puntosGanados = 0;
                                    cout<<"\n==== Reto " <<zonas[indice] <<" ====\n";
                                    switch (opcMenu){
                                        case 1:{
                                            cout<<"-----------------------------------------------------\n";
                                            cout<<"Bienvenido al reto de la biblioteca\n";
                                            cout<<"Usted se ha llevado el libro \n'Coraline y la puerta secreta', es hora de que lo devuelva\n";
                                            cout<<"Cuantos dias de retardo tiene? \n";
                                            cin>>diasRetraso;
                                            cout<<"-----------------------------------------------------\n";
                                            puntosGanados = biblioteca(diasRetraso);
                                            break;
                                        }
                                        case 2:{
                                            cout<<"-----------------------------------------------------------\n";
                                            cout<<"Bienvenido al reto de la cafeteria\n";
                                            cout<<"Sera que puedes ser lo suficientemente gloton para ganarte los 10 puntos?\n";
                                            cout<<"Eliga su producto del menu:\n1) Comida $50\n2) Snack $35\n3) Bebida $20\n";
                                            cin>>opc;
                                            cout<<"Cantidad: ";
                                            cin>>cantidad;
                                            cout<<"-----------------------------------------------------------\n";
                                            puntosGanados = cafeteria(opc, cantidad);
                                            break;
                                        }
                                        case 3:{
                                            float cali1, cali2, cali3;
                                            cout<<"-----------------------------------------------------\n";
                                            cout<<"Bienvenido al reto del laboratorio\n";
                                            cout<<"Durante este semestre en el laboratorio se le\n aplicaron 3 parciales ingrese sus calificicaciones\n";
                                            cout<<"Ingrese su primera calificacion: \n";
                                            cin>>cali1;
                                            cout<<"Ingrese su segunda calificacion: \n";
                                            cin>>cali2;
                                            cout<<"Ingrese su tercera calificacion: \n";
                                            cin>>cali3;
                                            cout<<"----------------------------------------------------\n";
                                            puntosGanados = laboratorio(cali1, cali2, cali3);
                                            break;
                                        }
                                        case 4:{
                                            float horas;
                                            cout<<"---------------------------------------------\n";
                                            cout<<"Bienvenido a la zona de estacionamiento\n";
                                            cout<<"Durante este semestre\n";
                                            cout<<"Cuantos horas utilizo el estacionamiento? ";
                                            cin>>horas;
                                            cout<<"---------------------------------------------\n";
                                            puntosGanados = estacionamiento(horas);
                                            break;
                                        }
                                        case 5:{
                                            int numAlmns;
                                            cout<<"---------------------------------------------\n";
                                            cout<<"Bienvenido a control a escolar.\n";
                                            cout<<"Usted debera conseguir nuevos aspirantes a\nIngresar en esta facultad\n";
                                            cout<<"Usted tiene 20 minutos\n";
                                            cout<<"=============== TIEMPO DESPUES ===============\n";
                                            cout<<"Cuantos alumnos va registrar?? ";
                                            cin>>numAlmns;
                                            cout<<"---------------------------------------------\n";
                                            puntosGanados = controlEscolar(numAlmns);
                                            break;
                                        }
                                        case 6:{
                                            float kw = 0.0;
                                            cout<<"---------------------------------------------\n";
                                            cout<<"Bienvenido al reto del centro de energia\n";
                                            cout<<"Usted habita en un dormitorio de la facultad digame\n";
                                            cout<<"¿¿Cual es su consumo de Kw de energia??\n";
                                            cin>>kw;
                                            cout<<"---------------------------------------------\n";
                                            puntosGanados = cenEnergia(kw);
                                            break;
                                        }
                                        case 7:{
                                            cout<<"-----------------------------------------------------------------------\n";
                                            cout<<"Bienvenido a la zona Tienda Universitaria.\n";
                                            int objt;
                                            float przUnitario = 20.00;
                                            cout<<"En este reto usted debe comprar libretas con un precio por pieza de $20\n ¿¿¿¿CUANTAS TE ANIMAS A LLEVAR???? \n";
                                            cin>>objt;
                                            cout<<"-----------------------------------------------------------------------\n";
                                            puntosGanados = tienda(objt,przUnitario);
                                            break;
                                        }
                                        case 8:{
                                            int punto1;
                                            cout<<"--------------------------------------------------------------------------------------------\n";
                                            cout<<"Bienvenido a la sala Gamer!!!\n";
                                            cout<<"---Para este reto tendras dos rivales---\n";
                                            cout<<"Jueguen Mario Bros y escriban sus puntajes\nSi tienes el puntaje mas alto ganaras 10 puntos\nSi tienes el segundo lugar, 5 puntos\nY si no --CERO--\n";
                                            cout<<"Ingresa tu puntaje: \n(El puntaje va de 0-1000)\n";
                                            cin>>punto1;
                                            cout<<"-------------------------------------------------------------------------------------------\n";
                                            puntosGanados = salaGamer(punto1);
                                            break;
                                        }
                                        case 9:{
                                            int dias;
                                            cout<<"------------------------------------------------\n";
                                            cout<<"Bienvenido a la zona de transporte\n";
                                            cout<<"Cuando no venia en su auto personal...\n";
                                            cout<<"Cuantos días a la semana utilizo el transporte??\n";
                                            cin>>dias;
                                            cout<<"------------------------------------------------\n";
                                            puntosGanados = transporte(dias);
                                            break;
                                        }
                                        case 10:{
                                            int pnts1;
                                            cout<<"------------------------------------------------------\n";
                                            cout<<"Bienvenido al concurso de Programacion\n";
                                            cout<<"En este concurso competiras contra Martín Andrighettí\n";
                                            cout<<"=================== COMPETICION ====================\n";
                                            cout<<"Ingresa tu puntuacion\nDe acuerdo a las normas. El rango\nde puntos es de 0-100\n";
                                            cin>>pnts1;
                                            cout<<"------------------------------------------------------\n";
                                            puntosGanados = concurso(pnts1);
                                            break;
                                        }
                                        default:{
                                            cout<<"---------------------------------------------\n";
                                            cout<<"Error, opcion no valida, intente de nuevo.\n";
                                            cout<<"---------------------------------------------\n";
                                            break;
                                        }
                                    }
                                    cout<<"Ganaste " <<puntosGanados <<" puntos.\n";
                                    puntosZona[indice] = puntosGanados;
                                    jugador.puntosTotales += puntosGanados;
                                    jugador.energia -= 15;
                                    visitadas[indice] = true;
                                } else if (opcMenu == 11){
                                    cout<<"\n=== DATOS GENERALES DEL JUGADOR ===\n";
                                    cout<<"Jugador: " <<jugador.nombre <<"\n";
                                    cout<<"Energia: " <<jugador.energia <<"%\n";
                                    cout<<"Puntos totales: " <<jugador.puntosTotales <<"\n";
                                    cout<<"Desglose por zonas:\n";
                                    for (int i=0;i<10;i++){
                                        if (visitadas[i]){
                                            cout<<"- " <<zonas[i] <<": " <<puntosZona[i] <<" pts\n";
                                        }
                                    }
                                } else if (opcMenu != 12){
                                    cout<<"Opcion no valida.\n";
                                }
                            }
                    //Resultados
                    cout<<"=============================================================\n";
                    cout<<"-------------------------END GAME----------------------------\n";
                    cout<<"=============================================================\n";
                    cout<<"Energia Restante " <<jugador.energia <<"%\n";
                    cout<<"=============================================================\n";
                    cout<<"Puntos Finales: " <<jugador.puntosTotales <<"\n";
                    cout<<"=============================================================\n";
                    if (jugador.puntosTotales >= 80){
                        cout<<"!!!FELICIDADES¡¡¡ Eres el mejor jugador del campus.\n";
                    }else if (jugador.puntosTotales >= 40){
                        cout<<"Excelente, eres superior al promedio.\n";
                    }else{
                        cout<<"Necesitas mejorar, tocara repetir el semestre.\n";
                    }
                return 0;           
        }