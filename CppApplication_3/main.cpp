#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string>
//#include <SDL2/SDL.h>
using namespace std;



int main (int argc, char** argv){
    int i=0;
    string linea;
    char M[10][10];
    ifstream lectura;
    lectura.open("laberinto.txt",ios::in);
    while(getline(lectura, linea)){
       // cout<<linea<<endl;
        for (int j=0 ; j< linea.length() ;j++ )
        {
            M[i][j]=linea.at(j);
            cout<<M[i][j]<<" ";

        }
        i++;
        cout<<endl;
    }

    lectura.close();

    return 0;
}
