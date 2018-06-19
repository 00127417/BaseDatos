#include <cstdlib>
#include<iostream>

using namespace std;

typedef struct datos{
    int numero;
    int cantidad;
    double promedio;
}dat;

dat sumanum(void);

int main(int argc, char** argv) {

    dat dato;
    dato=sumanum();
    
    return 0;
}

dat sumanum (void){
    int sum=0, n, i=0, prom,d;
    do{
        cout<<"Ingrese un numero, cero para terminar"<<endl;
        cin>>n;
        sum=sum+n;
        i++;
    }while(n!=0);
    
    prom=sum/--i;
    
}

