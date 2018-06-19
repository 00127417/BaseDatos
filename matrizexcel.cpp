#include<cstdlib>
#include<iostream>
using namespace std;
/*struct nodo{
    int nFil, nCol;
    struct nodo *sigCol, *sigFil;
    /*Area de datos ejem:
        int dato;
        o una union,etc

        */
struct nodo{
    int dato;
    struct nodo *hijoIzq;
    struct nodo *hijoDer;
};
void mostrarEnPreorden(nodo *p){
    if (p){
        cout<<p->dato<<" ";
        mostrarEnPreorden(p->hijoIzq);
        mostrarEnPreorden(p->hijoDer);
    }
}
