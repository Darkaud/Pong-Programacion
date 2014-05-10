#include <iostream>
#include <cstdlib>
#include <curses.h>

using namespace std;

int main ()
{
    int opcionmp, opciondif;

    do
	{
	cout <<"=======================\n";
	cout << "1.- Jugar \n";
	cout << "2.- Instrucciones \n";
	cout << "3.- Salir \n";
	cout <<"=======================\n";

	cin >> opcionmp;

	cout << endl;

	switch(opcionmp)
       {
        case 1:
            do
            {
                cout << "=======================\n";
                cout << "1.- Facil \n";
                cout << "2.- Normal \n";
                cout << "3.- Dificil \n";
                cout << "4.- Volver \n";
                cout << "=======================\n";

                cin >> opciondif;

                cout << endl;

                switch(opciondif)
                {
                      case 1:
                          cout << "Pantalla Facil" << endl;
                          break;

                      case 2:
                          cout << "Pantalla Normal" << endl;
                          break;

                      case 3:
                          cout << "Pantalla Dificil" << endl;
                          break;

                      default:
                          continue;

                }
            }while(opciondif != 3);

             break;

        case 2:

            cout << "El juego consiste en anotar más puntos que el rival. \n";
            cout << "Debe jugarse de dos jugadores, el que controlara la paleta de la derecha \n";
            cout << "la movera con las teclas W y S, y el que controlara la paleta de la izquierda \n";
            cout << "con las flechas arriba y abajo. \n";
            cout << "Los jugadores tienen que hacer chocar la pelota con el 'arco' del rival para \n";
            cout << "así anotar puntos, el primer jugador en llegar a los 15 puntos sera el ganador. \n";
            cout << "La pelota puede rebotar en los bordes de arriba y abajo, y en las paletas de cada jugador.\n";
            cout << "Facil: Jugador contra jugador sin nada que pueda dificultarles la partida. \n";
            cout << "Normal: Al medio del mapa habra un obstaculo en donde la pelota puede rebotar y asi \n";
            cout << "dificultar la partida. \n";
            cout << "Dificil: Al medio del mapa habra un obstaculo que se movera verticalmente para anadir una \n";
            cout << "mayor dificultad a la partida. \n";

             break;


        case 3:
             return 0;

        default:
        	continue;

        }
    }
    while (opcionmp != 3);


	system("pause");
}
