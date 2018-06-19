#include <cstdlib>
#include<iostream>
#define ordenMax 20
/*const int ordenMax = 20;*/
using namespace std;

float matrizA[ordenMax][ordenMax];
int orden;
void operacion(float matrizA[][ordenMax], int orden);
int main(int argc, char** argv) {

    cout<<"*******CALCULADORA DE MATRICES CUADRADAS*******"<<endl;
    cout<<"INGRESE EL ORDEN DE LA MATRIZ QUE DESEA CALCULAR"<<endl;
    do{
        cin>>orden;
    }while(orden<=0 or orden>20);  
  
    float valor;
    cout<<"INGRESE LOS VALORES DE LA MATRIZ"<<endl;
    for (int i=0; i<orden;i++){
        for(int j=0;j<orden;j++){
            cin>>valor;
            matrizA[i][j]=valor;
                            
        }
    }
    operacion(matrizA,orden);
    
    return 0;
}

void operacion(float matrizA[][ordenMax], int orden){
    int opcion;
    cout<<"*****MENU*****"<<endl;
    cout<<"1.SUMAR"<<endl;
    cout<<"2.RESTAR"<<endl;
    cin>>opcion;
 
 
    switch (opcion){
      
        case 1:
            int opcion2;
            cout<<"1.SUMAR LA MATRIZ CON ELLA MISMA"<<endl;
            cout<<"2.INGRESAR UNA NUEVA MATRIZ"<<endl;
            cin>>opcion2;
            switch (opcion2){
                case 1:
                     for (int i=0; i<orden;i++){
                        for(int j=0;j<orden;j++){
                            cout<<matrizA[i][j]+matrizA[i][j]<<"\t";
                        }
                         cout<<endl;
                     }
                     break;
                case 2:
                    int a,b;
                    float valor;
                    float matrizB[ordenMax][ordenMax],matrizC[ordenMax][ordenMax];
                    cout<<"INGRESE LOS VALORES DE LA NUEVA MATRIZ"<<endl;
                    for (int i=0; i<orden;i++){
                        for(int j=0;j<orden;j++){
                            cin>>valor;
                            matrizB[i][j]=valor;
                            
                        }
                    }
                    
                    for (int i=0; i<orden;i++){
                        for(int j=0;j<orden;j++){
                            cout<<matrizA[i][j]+matrizB[i][j]<<"\t";
                        }
                         cout<<endl;
                     }
                    
                default:
                    cout<<"EL VALOR INGRESADO ES INVALIDO, VUELVE LUEGO";
            }
            break;
            
        case 2:
            
            cout<<"1.RESTAR LA MATRIZ CON ELLA MISMA"<<endl;
            cout<<"2.INGRESAR UNA NUEVA MATRIZ"<<endl;
            cin>>opcion2;
            switch (opcion2){
                case 1:
                     for (int i=0; i<orden;i++){
                        for(int j=0;j<orden;j++){
                            cout<<matrizA[i][j]-matrizA[i][j]<<"\t";
                        }
                         cout<<endl;
                     }
                     break;
                case 2:
                    int a,b;
                    float valor;
                    float matrizB[ordenMax][ordenMax],matrizC[ordenMax][ordenMax];
                    cout<<"INGRESE LOS VALORES DE LA NUEVA MATRIZ"<<endl;
                    for (int i=0; i<orden;i++){
                        for(int j=0;j<orden;j++){
                            cin>>valor;
                            matrizB[i][j]=valor;
                            
                        }
                    }
                    
                    for (int i=0; i<orden;i++){
                        for(int j=0;j<orden;j++){
                            cout<<matrizA[i][j]-matrizB[i][j]<<"\t";
                        }
                         cout<<endl;
                     }
                    
                default:
                    cout<<"EL VALOR INGRESADO ES INVALIDO, VUELVE LUEGO";
            }
            break;
            
        default:
            cout<<"EL VALOR INGRESADO ES INVALIDO, VUELVE LUEGO";
    }
}