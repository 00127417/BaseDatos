#include <cstdlib>
#include<iostream>


using namespace std;

struct nodo{
    int dato;
    struct nodo *sig;
};

class ListaSimple{
private:
    nodo *pInicio;
public:
    ListaSimple();
    void insInicioLista(int);
    void mostrar(void);
    void mostrarLista(nodo *);
    void suma(void);
    int sumaTotal(nodo *);
    void borrarOcu(int);
};
ListaSimple::ListaSimple(){
    pInicio=NULL;
}
void ListaSimple::insInicioLista(int dato){
    nodo *nuevo;
    nuevo=new nodo;
    nuevo->dato=dato;
    nuevo->sig=pInicio;
    pInicio=nuevo;
}
void ListaSimple::mostrar(void){
    mostrarLista(pInicio);
}
void ListaSimple::mostrarLista(nodo *p){
     if (p!=NULL){
         //cout<<p->dato<<" ";
         mostrarLista(p->sig);
         cout<<p->dato<<" "; 
    }
}
void ListaSimple::suma(void){
    cout<<sumaTotal(pInicio);
}
int ListaSimple::sumaTotal(nodo *p){
    if(p->sig==NULL){
        return (p->dato);
    }
    return p->dato+sumaTotal(p->sig);
}
/*Bibliografia: "Borrar occurencia",Yahoo[en linea],disponible en:*/

void ListaSimple::borrarOcu(int datoBorrar){
    nodo *salto;
    nodo* p=pInicio;
    nodo* aux;
    nodo* aux2=pInicio;
    
    while(p->sig!=NULL){
        if(p->sig->dato==datoBorrar){
            salto=p->sig;
            p->sig=p->sig->sig;
            salto = p;
            
        }else{
            p=p->sig;
        }
    }
    if(aux2->dato==datoBorrar){
        aux=aux2->sig;
        aux2->sig=NULL;
        pInicio=aux;
        delete(aux);
        
    }
}

int main(void){
    //i)
    ListaSimple obj;
    int dato,datoBorrar;
    char f='s';
    //ii)
    while(f=='s'){
        cout<<"Ingrese dato (ingrese 'n' para salir)"<<endl;
        cin>>dato;
        obj.insInicioLista(dato);
        cout<<"continuar (Ingrese 'n' para salir o s para continuar)"<<endl;
        cin>>f;
    }
    
    //iii)
    obj.mostrar();
    cout<<endl;
    //iv)
    cout<<"La suma de los dato es: ";
    obj.suma();
    //v)
    
    cout<<endl<<"Ingrese dato a eliminar"<<endl;
    cin>>datoBorrar;
    obj.borrarOcu(datoBorrar);
    obj.mostrar();
    //vi)
    //cout<<"la suma despues de eliminar las ocurrenciaas de un dato es: ";
    //.suma();
    return 0;
}
