#include <cstdlib>
#include<iostream>
#include<string.h>
using namespace std;

struct nodo{
    string nombre;
    nodo *sig;
};

class listaSimple{
private:
    nodo *pInicio;
public:
    void lista(void);
    void insNomList(string);
    void mostrar();
    void mostrarlista( nodo* );
    void invertirNom(nodo*, int);
    void invertir(int);
};

void listaSimple::lista(void){
    this->pInicio=NULL;
}
void listaSimple::insNomList(string nomb){
    nodo *nuevo;
    nuevo=new nodo;
    nuevo->nombre=nomb;
    nuevo->sig=this->pInicio;
    this->pInicio=nuevo;
}
void listaSimple::mostrar(){
    nodo *aux=this->pInicio;
    mostrarlista(aux);
}
void listaSimple::mostrarlista(nodo *p) {
    
    while (p!=NULL){
        cout<<p->nombre<<endl;
        p=p->sig;
    }
}
void listaSimple::invertir(int posicion){
    nodo *aux=this->pInicio;
    invertirNom(aux,posicion);
    //cout<<"cc";
}
    
void listaSimple::invertirNom(nodo *p, int posicion){
    int cont=0;
    //string nombre;
    string aux_cadena;
    while(cont<=posicion){
        p=p->sig;
        cont++;
    }
    cout<<p->nombre;
    //nombre=p->nombre;
   /* for(int i=p->nombre.size();i>=0;i--){
        aux_cadena+=p->nombre[i];
    }
    p->nombre=aux_cadena;
    cout<<p->nombre;*/
    
}

void menu(int);
int main(void) {
    listaSimple obj;
    int cant,i=0, opc;
    string nomb;
    cout<<"ingrese la cantidad de nombres que desea ingresar"<<endl;
    cin>>cant;
    while(i<cant){
        cout<<"ingrese el nombre"<<endl;
        cin>>nomb;
        obj.insNomList(nomb);
        i++;
    }
    do{
        cout<<"*****MENU*****"<<endl;
        cout<<"1. Invertir nombre"<<endl;
        cout<<"2.Obtener el primer nombre de la lista"<<endl;
        cout<<"3. Obtener el ultimo nombre de la lista"<<endl;
        cout<<"4. Salir"<<endl;
        cin>>opc;
        menu(opc);
    }while(opc!=4);
    //obj.mostrar();

    return 0;
}
void menu(int opc){
    listaSimple obj;
    switch(opc){
        case 1:
            int posicion;
            cout<<"Ingrese la posicion del nombre que desea invertir"<<endl;
            cin>>posicion;
            obj.invertir(posicion);
            
            
    }
}

