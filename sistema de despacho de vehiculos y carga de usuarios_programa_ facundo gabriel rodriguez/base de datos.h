using namespace std;
/* Éste header proviene del archivo basededatos.cpp y sirve para ser llamado por por el programa rudualop.cpp o por el programa
recibir usuario.cpp*/
namespace nuevousuario{ 
//declarar (namespace nuevousuario) me permite que sea llamado por un programa.
int nu(){
//int nu() se escribe para porder ser llamado como función.
int i=0;
string nombre;
string apellido;
string dirs[3];
char ntel[90];
char nur=0;//nuevo usuario respuesta.
char resp=0;
char resp1=0;
char resp2=0;
char resp3=0;
char resp4=0;
            
            cout << "¿Desea registrarlo en éste momento? (s/n) \n" << endl;
            cin >> nur;
            cin.ignore();
            //cin.ignore() evita que la toma de respuesta genere conflicto.
do{                      

  if(nur == 's'){
                cout << "\nIngrese su número de teléfono \n" << endl;
                cin >> ntel;
               
                fstream archivo("nuevo usuario.txt");
                
                do{
                   cout << "\n¿Desea continuar con la carga de datos personales del usuario?\n" << endl;
                   cout << "s/n\n" << endl;
                   cin >> resp1;
                   cin.ignore();

                   if (resp1 == 's'){
                                    if(!archivo.is_open()){
                                                           archivo.open("nuevo usuario.txt", ios::out);
                                                          }
                                                            
                                    
                                       cout << "\nEscriba su nombre\n"<<endl;
                                       getline(cin, nombre);

                                       cout << "\nEscriba su apellido\n"<<endl;
                                       getline(cin, apellido);
                 
                                       do{
                                          cout << "\nEscriba su direccion, puede agendar hasta 3\n"<<endl;
                                          getline(cin, dirs[i]);
                                          i++;
                                          if(i<3){
                                                 cout << "\n¿Desea agendar otra dirección?\n" "(s/n)" << endl;
                                                 cin >> resp4;
                                                 cin.ignore();
                                                 }else{
                                                      resp4='n';
                                                      cout<<"\nHa completado el espacio disponible para almacenar direcciones\n"<<endl;
                                                      cout<<"Presione ENTER para continuar\n"<<endl;
                                                      cin.ignore();
                                                      }
                                          }while (resp4 != 'n');

                                          cout << "\n¿Desea guardar los datos ingresados?\n" << endl; 
                                          cout << "s/n\n" << endl;
                                          cin >> resp2;
                                          cin.ignore();
                                          if(resp2 == 's'){
                                                           archivo << "Nombre: " << nombre << endl;
                                                           archivo << "Apellido: " << apellido << endl;
                                                           archivo << "Direcciones: " <<"\n"<< dirs[0]<<"\n"<<dirs[1]<<"\n"<<dirs[2]<< endl;
                                                           archivo << "Teléfono: " << ntel << endl;

                                                           cout << "\nRegistro exitoso.\n" << endl;
                                                           }else{
                                                                return 0;
                                                                }
                                                           archivo.close();
                                    }else{
                                         return 0;
                                         }
                                           
                                     cout << "\n¿Desea modificar los datos ingresados?\n" << endl;
                                     cout << "s/n\n" << endl;
                                     cin >> resp3;
                                     cin.ignore();
                   }while(resp3 != 'n'); 
              
               rename("nuevo usuario.txt", ntel);  
               cout << "\nEl programa está por concluir con exito\n" << endl;

                               
                }else{
                     return 0;
                     }
  cout << "\n¿Desea cargar a un nuevo usuario? (s/n) \n" << endl;
  cin >> resp;

  }while(resp == 's');                  

  cout << "\nEl programa concluyó con exito" << endl;

  return 0; 
  }
 }
