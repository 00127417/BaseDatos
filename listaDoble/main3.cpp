#include <cstdlib>
#include<iostream>
#include<cstdlib>

using namespace std;

struct nodo{
    int dato;
    struct nodo *sig;
    struct nodo *ant;
};

class ListaSimple{
private:
    nodo *inicio;
public:
    ListaSimple();
    void insInicioLista(int);
    void insFinalLista(int);
    void mostrar(void);
    void mostrarLista(nodo *);
    void suma(void);
    void eliminar(nodo *);
    void Delete(void);
    void mostrar2(nodo *);
    void insElementoDet(int ,int);
    bool eliminarElemento(int);
   
};
ListaSimple::ListaSimple(){
    inicio=NULL;
}
void ListaSimple::insInicioLista(int dato){
    nodo *nuevo;
    nuevo=new nodo;
    nuevo->dato=dato;
    //inicio->ant=nuevo;
    nuevo->sig=inicio;
    nuevo->ant=NULL;
    inicio=nuevo;
}
void ListaSimple::insFinalLista(int dato){
    nodo *nuevo;
    nuevo=new nodo;
    nuevo->dato=dato;
    //inicio->ant=nuevo;
    nuevo->sig=NULL;
    if(!inicio){
        inicio=nuevo;
        nuevo->ant=NULL;
    }
    else{
        nodo *s= inicio;
        while(s->sig){
            s=s->sig;
        }
        s->sig=nuevo;
        nuevo->ant=s;
    }
}
void ListaSimple::insElementoDet(int dato, int datoRef){
    nodo *nuevo=new nodo;
    nuevo->dato=dato;
    if (!inicio){
        inicio=nuevo;
        inicio->ant=inicio->sig=NULL;
    }
    else{
        if(inicio->dato==datoRef){
            nuevo->sig=inicio;
            nuevo->ant=NULL;
            inicio->ant=nuevo;
            inicio=nuevo;
        }
        else{
            nodo *s=inicio;
            while(s->sig &&(s->sig->dato!=datoRef)){
                s=s->sig;
            }
            nuevo->sig=s->sig;
            s->sig=nuevo;
        }
    }
}
bool ListaSimple::eliminarElemento(int dato)
{
    //creamos los punetero que nos serviran para borrar
    nodo *aux = this->inicio; // para buscar el nodo
    nodo *saltarin; // estara una posicion adelante del nodo buscado
    nodo *salto; //estara un nodo antes
    int cont=0; // si esta en uno significa que es el primer elemento de la lista
    
    while(aux && aux->dato != dato) 
    {
        aux=aux->sig;
        cont++;
    }
    
    //validamos si encontro el numero
    if(aux)
    {
        //preguntamos si el primer elemento es para eliminar
        if(cont==0)
        {
            saltarin = aux->sig;
            aux->sig=NULL; //desenlazamos el nodo
            this->inicio= saltarin; //cambiamos el inicio de la lista
            delete(aux); //eliminamos el nodo
        }
        else
        {
           salto=this->inicio;
           saltarin = aux->sig; // le agreamos la estructura que esta adelante de aux
            //tendremos que llegara una estructura antes
            while(salto->sig->dato != dato)
            {
               salto=salto->sig;
            }
            //nos situamos detras procederemos hacer la elminacion
            aux->sig=NULL; //desenlazamos el nodo buscado
            //luego volemos a enlazara para no afectar la lista
            salto->sig=saltarin;
            delete(aux); // elimino el nodo 
        }    
        return true;
    }
    else
    {
        return false; //retornamos false si no se encontro el nodo
    }
    
}
void ListaSimple::mostrar(void){
    //mostrarLista(inicio);
    mostrar2(inicio);
}
void ListaSimple::mostrarLista(nodo *p){
    
    if(p){
        cout<<p->dato<<endl;
        while(p->sig){
            p=p->sig;
            cout<<p->dato<<endl;
        }
        cout<<p->dato<<endl;
        while(p->ant){
            p=p->ant;
            cout<<p->dato<<endl;
        }
    }
}
void ListaSimple::mostrar2(nodo *p){
    if (p){
        cout<<p->dato<<" ";
        mostrar2(p->sig);
        //cout<<p->dato<<" ";
    }
}
void ListaSimple::Delete(){
    if (inicio==NULL){
        cout<<"La Lista esta vacia";
         
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
        objLista.insFinalLista(dato);
    }while(dato!=0);
    
    objLista.mostrar();
    objLista.insElementoDet(4,3);
    objLista.mostrar();
    return 0;
}

