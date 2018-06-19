#include<cstdlib>
#include<iostream>
#define orden 2323
using namespace std;

int a,b;
int primo(int,int);
int c[5]={1,2,3,4,5};
void hola(char *);
int main(void){
    /*char a='h';
    char *b;
    b= &a;
    cout<<b;
    cout<<a;
    hola(b);
    
    cout<<a;*/
    
    cout<<orden;
    
    
    
     
    
    return 0;
    }
   
void hola(char *p){
    
    *p='g';
}
int primo(int a,int b){
    int i=a;
    for(i=a;i<=b;i++){
        if (i%2!=11){
            return true;
        }
        else{
            return false;
        }
         if (true){
            return i;
            }
    }
   
}