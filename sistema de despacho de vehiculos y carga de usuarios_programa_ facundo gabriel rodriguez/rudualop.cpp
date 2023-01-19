#include <iostream>
#include <string>
#include <fstream>
#include "base de datos.h"
#include "leer_en_bd.h"
/*
Autor del programa: Facundo Gabriel Rodriguez
Año:2021 
*/
/*Éste programa no debe ser modificado para ello utilizar los de prueba que están nombrados con un 2*/
using namespace std;
using namespace nuevousuario;
using namespace leerbasededatos;
//declarar (namespace nuevousuario) me permite que sea llamado el programa creado como (.h).

char resp;

int main(){

           cout << "Bienvenido al sistema de despacho de vehículos.\n""¿Desea agregar un nuevo usuario? " "(s/n)\n" << endl;
           cin >> resp;
           cin.ignore();

           switch (resp){
                         case 's':
                         lbd();
                         break;
 
                         case 'n':
                         nu();
                         break;                        
                        }

return 0;
}
