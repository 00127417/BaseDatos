#include <cstdlib>
#include<iostream>
#define ordenM 20

using namespace std;
int  opcion;
float matrizA[ordenM][ordenM];
float operacion(matrizA[][ordenM]);
int main(void) {
    
    cout<<"*******CALCULADORA DE MATRICES CUADRADAS*******"<<endl;
    cout<<"INGRESE EL ORDEN DE LA MATRIZ QUE DESEA CALCULAR"<<endl;
    cin>>ordenM;
   
   
     float valor;
    cout<<"INGRESE LOS VALORES DE LA MATRIZ"<<endl;
    for (int i=0; i<ordenM;i++){
        for(int j=0;j<ordenM;j++){
            cin>>valor;
            matrizA[i][j]=valor;
                            
        }
    }
            
    operacion(matrizA);
    
    
    return 0;
}

float operacion (matrizA[][ordenM]){
    cout<<"*****MENU*****"<<endl;
    cout<<"1.SUMAR"<<endl;
    cout<<"2.RESTAR"<<endl;
    cin>>opcion;
 
    /*matriz[ordenM][ordenM];*/
    switch (opcion){
      
        case 1:
            int opcion2;
            cout<<"1.SUMAR LA MATRIZ CON ELLA MISMA"<<endl;
            cout<<"2.INGRESAR UNA NUEVA MATRIZ"<<endl;
            cin>>opcion2;
            switch (opcion2){
                case 1:
                     for (int i=0; i<ordenM;i++){
                        for(int j=0;j<ordenM;j++){
                            cout<<matrizA[i][j]+matrizA[i][j]<<"\t";
                        }
                         cout<<endl;
                     }
                     break;
            }
            break;
            
        case 2:
            cout<<"1.RESTAR LA MATRIZ CON ELLA MISMA"<<endl;
            cout<<"2.INGRESAR UNA NUEVA MATRIZ"<<endl;
            break;
    }
}