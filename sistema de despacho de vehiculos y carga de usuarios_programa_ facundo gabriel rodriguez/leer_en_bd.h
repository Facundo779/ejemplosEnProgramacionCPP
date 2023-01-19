using namespace std;
/*
Autor del programa: Facundo Gabriel Rodriguez
Año:2021 
*/
namespace leerbasededatos{


int lbd(){

string obtenciondedatos[6];
string datostemporales[6];
string ntel;
int nm=0; //Número de móviles a enviar
int sd=0; //Selección de dirección
int i=0;
          cout << "Introduzca su número de teléfono" << endl;
          getline(cin, ntel);

          ifstream archivo(ntel); //ifstream me permite leer un archivo de texto plano
          
         
          while (getline(archivo, obtenciondedatos[i])) {
                                                         if(i>=3 && i!=6){
                                                                         cout<<"Dirección "<<i-2<<": "<<obtenciondedatos[i]<< endl;
                                                                         i++;                
                                                                         }else{
                                                                              i++;
                                                                              }                    
                                                         }
          archivo.close();

          cout<<"\n####################"<<endl;
          
          cout<<"\nSeleccione el número de móviles a enviar\n"<<endl;
          cin>>nm;
          cin.ignore();
          
          cout<<"\nSeleccione una dirección\n""Presione: 1; 2; 3\n"<<endl;
          cin>>sd;
          cin.ignore();
            
              switch (sd){
                          case 1:
                                  
                                  if(nm==1){
                                           cout<<"\nSe le enviará un móvil a: "<<obtenciondedatos[3]<<endl;
                                           }else{
                                                cout<<nm<<" móviles serán enviados a: "<<obtenciondedatos[3]<<endl;
                                                }                                   
                         break;
 
                         case 2:
                                 if(nm==1){
                                           cout<<"\nSe le enviará un móvil a: "<<obtenciondedatos[4]<<endl;
                                           }else{
                                                cout<<nm<<" móviles serán enviados a: "<<obtenciondedatos[4]<<endl;
                                                } 
                         break;
                         
                         case 3:
                                 if(nm==1){
                                           cout<<"\nSe le enviará un móvil a: "<<obtenciondedatos[5]<<endl;
                                           }else{
                                                cout<<nm<<" móviles serán enviados a: "<<obtenciondedatos[5]<<endl;
                                                }
                         break;                        
                        }
                      
 return 0;
 }
}
