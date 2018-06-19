#include <cstdlib>
#include<iostream>
#include<cstdlib>
struct nodo{
    int dato;
    struct nodo *sig;
};

class ListaSimple{
    private:
        nodo *pInicio;
        
public:
    ListaSimple();
    void insNuevo(int dato);
    void insNuevoF(int dato);
    void insAntesde(int, int);
    ListaSimple(){
        pInicio=NULL;
    }
    void insNuevo(int dato){
        nodo *nuevo=new nodo;
        nuevo->dato=dato;
        nuevo->sig=NULL;
        if(pInicio==NULL){
            pInicio=nuevo;
        }
        else{
            nuevo->sig=pInicio;
            pInicio=nuevo;
        }
    }
    void insNuevoF(int dato){
        nodo *nuevo=new nodo;
        nuevo->dato=dato;
        nuevo->sig=nuevo;
        if (pInicio==NULL){
            pInicio=nuevo;
        }
        else{
            nodo *s=pInicio;
            while(s->sig!=NULL){
                s=s->sig;
            }
            s->sig=nuevo;
        }
    }
   void insAntesde(int dato, int Antesde){
       if (pInicio !=NULL){
           pInicio=new nodo;
           pInicio->dato=dato;
           pInicio->sig=NULL;
       }
       else{
           if(pInicio==Antesde){
               nodo nuevo= new nodo;
               nuevo->dato=dato;
               nuevo->sig=pInicio;
               pInicio=nuevo;
           }
           else{
               nodo *s=pInicio;
               while(s->sig!=NULL && s->sig!=Antesde){
                   s=s->sig;
               }
               if(s->sig==NULL){
                   s=new nodo;
                   s->dato=dato;
                   s->sig=NULL;
               }
               nodo aux=new nodo;
               aux->sig=s->sig;
               aux->dato=dato;
           }
       }
   }
            
};
using namespace std;

int main(int argc, char** argv) {

    return 0;
}

