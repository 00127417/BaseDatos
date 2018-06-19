#ifndef METODOSLISTASIMPLE_H
#define METODOSLISTASIMPLE_H

#include <iostream>
#include "ListaSimple.h"

using namespace std;

///////////// Constructor de la clase Lista /////////////
ListaSimple::ListaSimple(void)
{
    cout << "Constructor ejecutándose" << endl;
    pInicio = NULL; // Se le puede asignar cero.
}

///////////// Insercion de un nodo al inicio de la lista /////////////
void ListaSimple::insertarInicioLista(int dato)
{
    Nodo *nuevo = new struct Nodo;
    
    nuevo->dato = dato;
    nuevo->sig = pInicio;
    pInicio = nuevo;
}

///////////// Mostrar todos los nodos de la lista, recorrido iterativo /////////////
void ListaSimple::mostrarListaIter(void){
    Nodo *q = pInicio;
    while(q != NULL){ // (q)
        cout << q->dato << endl;
        q = q->sig;
    }
}

///////////// Mostrar todos los nodos de la lista, recorrido recursivo /////////////
void ListaSimple::mostrarListaRecursiva(void){
    mostrarListaRecursivaAux(pInicio);
}

void ListaSimple::mostrarListaRecursivaAux(Nodo *p){
    if(p){
        cout << p->dato << endl;
        mostrarListaRecursivaAux(p->sig);
    }
}

///////////// Mostrar todos los nodos de la lista en forma inversa /////////////
void ListaSimple::mostrarListaInversa(void){
    mostrarListaInversaAux(pInicio);
}

void ListaSimple::mostrarListaInversaAux(Nodo *p){
    if(p){
        mostrarListaInversaAux(p->sig);
        cout << p->dato << endl;
    }
}

///////////// Inserción de un nodo al final de la lista, con recorrido iterativo /////////////
void ListaSimple::insertarFinalLista(int dato)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
 
    //Notar que hay dos casos de inserción: si la lista esta
    //vacia o si ya tiene elementos.
    if(!pInicio)
        pInicio = nuevo;
    else
    {
        Nodo *s = pInicio;
        while(s->sig)
            s = s->sig;
        s->sig = nuevo;
    }
}

///////////// Inserción de un nodo al final de la lista, con recorrido recursivo /////////////
void ListaSimple::insertarFinalListaRecursiva(int dato)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = dato;
    nuevo->sig = NULL;
 
    //Notar que hay dos casos de inserción: si la lista esta
    //vacia o si ya tiene elementos.
        Nodo *aux = ultimoNodo(pInicio); // Esta es la función recursiva.
        if(!aux)
            pInicio = nuevo;
        else
            aux->sig = nuevo;
}

Nodo *ListaSimple::ultimoNodo(Nodo *p)
{
    if(!p) // Si no hay nodos en la lista, retornar NULL,
        return NULL;
    else
        if(!p->sig) // Si no hay más nodos después, retornar la
            return p; // dirección del nodo apuntado por p.
        else
            if(p->sig) // si hay un nodo adelante, seguir saltando.
                return ultimoNodo(p->sig);
}

///////////// Inserción de un nodo antes de un elemento determinado /////////////
void ListaSimple::insertarAntesDeElemento(int dato, int datoRef)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = dato;

    if(!pInicio){ // Si la lista esta vacia.
        pInicio = nuevo;
        pInicio->sig = NULL;
    }
    else
        if(pInicio->dato == datoRef){ // Si el elemento de referencia
            nuevo->sig = pInicio;     // es el primero de la lista.
            pInicio = nuevo;
        }
       else{                   // Casos en que el elemento de referencia se encuentra
            Nodo *s = pInicio; // a la mitad de la lista o no esta en la lista.
            while(s->sig && (s->sig->dato != datoRef))
                s = s->sig;
            nuevo->sig = s->sig;
            s->sig = nuevo;
        }
}

///////////// Inserción de un nodo despues de un elemento determinado /////////////
// Si el elemento de referencia no existe en la lista, el nuevo elemento
// se insertara en la cola:
void ListaSimple::insertarDespuesDeElemento(int dato, int datoRef)
{
    Nodo *nuevo = new Nodo;
    nuevo->dato = dato;

    if(!pInicio){ // Si la lista está vacía.
        pInicio = nuevo;
        pInicio->sig = NULL;
    }
    else{
        Nodo *s = pInicio, *q = NULL;
        while(s && s->dato != datoRef){ // Hacer avanzar los punteros sobre la lista.
            q = s;
            s = s->sig;
        }
        if(!q){ // Si s se quedó apuntando al primer elemento.
            nuevo->sig = s->sig;
            s->sig = nuevo;
        }
        else
            if(!s){ // Si s se salió de la lista.
                q->sig = nuevo;
                nuevo-> sig = NULL;
            }
            else{ // Si q y s apuntan a nodos contiguos (en medio de la lista).
                nuevo->sig = s->sig;
                s->sig = nuevo;
            }
    }
}

///////////// Búsqueda de un elemento en una lista lineal simple /////////////
bool ListaSimple::buscarEnListaSimple(int datoBuscar)
{
    Nodo *s;

    s = pInicio;
    while (s && (s->dato != datoBuscar))
        s = s->sig;
    if(s)
        return true;
    else
        return false;
}

///////////// Búsqueda recursiva de un elemento en una lista lineal simple /////////////
bool ListaSimple::buscarEnListaSimpleRecursiva(int datoBuscar)
{
    return buscarEnListaSimpleRecursivaAux(pInicio, datoBuscar);
}

bool ListaSimple::buscarEnListaSimpleRecursivaAux(Nodo *p, int datoBuscar)
{
    if(p && (p->dato != datoBuscar))
        buscarEnListaSimpleRecursivaAux(p->sig, datoBuscar);
    else
        if(p)
            return true;
        else
            return false;
}

///////////// Eliminación de un elemento de una lista lineal simple /////////////
bool ListaSimple::eliminarElementoDeListaSimple(int datoBorrar)
{
    Nodo *s = pInicio;

    if(s)
        if(s->dato == datoBorrar){ // Si el nodo a borrar es el primero.
            pInicio = s->sig;
            delete(s);
            return true;
        }
        else{
            while(s->sig && (s->sig->dato != datoBorrar)) // Si el dato a borrar existe,
                s = s->sig;                           // s se detendrá en el nodo anterior.
            if(s->sig){ // Si el nodo a eliminar es el último o está antes del último.
                Nodo *q = s->sig;
                s->sig = s->sig->sig;
                delete(q);
                return true;
            }
            else // si el dato a borrar no está en la lista.
                return false;
        }
}

///////////// Eliminación de todos ls nodos de una lista lineal simple /////////////
void ListaSimple::eliminarTodosElementosListaSimple(void)
{
    if(pInicio){
        eliminarTodosElementosListaSimpleRecursiva(pInicio);
        pInicio = NULL;
    }
}

void ListaSimple::eliminarTodosElementosListaSimpleRecursiva(Nodo *p)
{
    if(p->sig)
        eliminarTodosElementosListaSimpleRecursiva(p->sig);
    delete(p);
}

#endif /* METODOSLISTASIMPLE_H */
