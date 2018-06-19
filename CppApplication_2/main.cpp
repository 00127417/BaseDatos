#include <cstdlib>
#include<iostream>
using namespace std;

int main(int argc, char** argv) {
    char alfabeto[27];
    char letra;
    int i;
    for (letra="A",i=0; letra<="Z";letra++,i++){
        alfabeto[i]=letra;
        
        alfabeto[i]=NULL;
        cout<<"las letrs son: "<<alfabeto;
    }

    return 0;
}

/*for (int i=0; i<ordenM;i++){
        for(int j=0;j<ordenM;j++){
            cout<<matrizA[i][j]<<"\t";
        }
           cout<<endl;
        }*/