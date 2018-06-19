#include<cstdlib>
#include<iostream>
#include<string>
using namespace std;

struct persona{
    string nombre;
    int edad;
}per;

per llenar();

int main(void){
    
    per llenar();

    return 0;
}

per llenar(){
    per p;
    int e;
    string n;
    cout<<"Ingrese el nombre"<<endl;
    cin>>n;
    cout<<"Ingrese la edad"<<endl;
    cin>>e;
}