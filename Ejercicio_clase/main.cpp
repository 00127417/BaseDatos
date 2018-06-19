#include <cstdlib>
#include<iostream>
#include<cstdlib>
using namespace std;

struct nodo{
    int dato;
    struct nodo *sig;
};

class ListaSimple{
private:
    nodo *inicio;
public:
    ListaSimple();
    void insInicioLista(int);
    void insMedio(int, int);
    void mostrar(void);
    void mostrarLista(nodo *);
};
ListaSimple::ListaSimple(){
    inicio=NULL;
}
void ListaSimple::insInicioLista(int dato){
    nodo *nuevo;
    nuevo=new nodo;
    nuevo->dato=dato;
    nuevo->sig=inicio;
    inicio=nuevo;
}


void ListaSimple::insMedio(int dato, int datoref) {
    if (inicio !=NULL){
           inicio=new nodo;
           inicio->dato=dato;
           inicio->sig=NULL;
       }
       else{
           if(inicio->dato==datoref){
               nodo *nuevo= new nodo;
               nuevo->dato=dato;
               nuevo->sig=inicio;
               inicio=nuevo;
           }
           else{
               nodo *s=inicio;
               while(s->sig!=NULL && s->dato !=datoref){
                   s=s->sig;
               }
               if(s->sig==NULL){
                   s=new nodo;
                   s->dato=dato;
                   s->sig=NULL;
               }
               nodo *aux=new nodo;
               aux=s;
               aux->sig=s->sig;
               aux->dato=dato;
           }
       }
}

void ListaSimple::mostrar(void){
    mostrarLista(inicio);
}
void ListaSimple::mostrarLista(nodo *p){
    if (p!=NULL){
        mostrarLista(p->sig);
        cout<<p->dato;
        
    }
}


 int main(void) {
     ListaSimple objLista;
     int dato,nuevo,datoref;
     cout<<"digite un dato o pulse ctrl-D para finalizar"<<endl;
     do{
         cin>>dato;
         objLista.insInicioLista(dato);
         cout<<"digite un dato o pulse ctrl-D para finalizar"<<endl;    
     }while(dato);
     cout<<"ingrese nuevo dato"<<endl;
     cin>>nuevo;
     cout<<"ingrese dato de referencia"<<endl;
     cin>>datoref;
     objLista.insMedio(nuevo,datoref);
     objLista.mostrar();
     return 0;    
}

