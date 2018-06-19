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
   
    void mostrar(void);
    void mostrarLista(nodo *);
    void suma(void);
    void eliminar(nodo *);
    void Delete(void);
    
   
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
void ListaSimple::mostrar(void){
    mostrarLista(inicio);
}
void ListaSimple::mostrarLista(nodo *p){
     if (p!=NULL){
         //cout<<p->dato<<" ";
         mostrarLista(p->sig);
         cout<<p->dato<<" "; 
    }
}
void ListaSimple::Delete(){
    if (inicio==NULL){
        cout<<"La Lista esta vacia y hola mundo";
         
    }
    eliminar(inicio);
    inicio=NULL; 
}
void ListaSimple::eliminar(nodo *p){
    if(p!=NULL){
        eliminar(p->sig);
        delete(p);
    }
    
}

int main(void) {
    ListaSimple objLista;
    int dato;
    do{
        cout<<"Ingrese un dato y cero para terminar"<<endl;
        cin>>dato;
        objLista.insInicioLista(dato);
    }while(dato!=0);
    objLista.mostrar();
    objLista.Delete();
    cout<<"\n"<<endl;
    objLista.Delete();
    
    return 0;
}

