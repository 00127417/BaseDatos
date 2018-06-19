#include <cstdlib>
#include <iostream>

using namespace std;
int a,b;
int main(void) {
    
    cout<<"Ingrese dos enteros: "<<endl;
    cin>>a>>b;
    
    if (a>b){
        cout<<"El primero es mayor"<<endl;
       }
    else{
        if(a<b){
            cout<<"El primero es menor"<<endl;
                
            }
        else{
            cout<<"Son iguales"<<endl;
        }
        
    }
    
    return 0;
}

