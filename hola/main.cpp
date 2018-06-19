#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "MetodosListaSimple.h"

using namespace std;

int main(void) {
    //ListaSimple *objLista = new ListaSimple();
    //ListaSimple objLista = new ListaSimple();
    ListaSimple objLista;
    int dato, datoRef, datoBuscar, datoBorrar;
    
    // Inseción al inicio de la lista:
    cout << "Digite un numero o pulse Ctrl-D para terminar: ";
    while(cin >> dato){
        //objLista->insertarInicioLista(dato);
        //(*objLista).insertarInicioLista(dato); // Tambien se puede hacer asi.
        //objLista.insertarInicioLista(dato);
        //objLista.insertarFinalLista(dato);
        //objLista.insertarFinalListaRecursiva(dato);
        cout << "Digite el dato antes del cual insertará: ";
        cin >> datoRef;
        objLista.insertarAntesDeElemento(dato, datoRef);
        //objLista.insertarDespuesDeElemento(dato, datoRef);
        //cout << "Digite el dato después del cual insertará: ";
        //cin >> datoRef;
        cout << "Digite un numero o pulse Ctrl-D para terminar: ";
    }
    cin.clear();
    //cin.ignore(100, '\n');
    cout << "Fin de inserción de elementos\n\n";
    
    // Desplegar los elementos de la lista iterativamente:
    cout << "-Los elementos de la lista son:\n";
    //objLista->mostrarListaIter();
    objLista.mostrarListaIter();

    // Desplegar los elementos de la lista recursivamente:
    cout << "Los elementos de la lista son:\n";
    //objLista->mostrarListaRecursiva();
    objLista.mostrarListaRecursiva();
    
    // Desplegar los elementos de la lista en orden inverso:
    cout << "Los elementos de la lista en orden inverso son:\n";
    //objLista->mostrarListaInversa();
    objLista.mostrarListaInversa();
    
    // Buscar un elemento en la lista recién creada:
    cout << "Qué elemento desea buscar?: ";
    cin >> datoBuscar;
    if(objLista.buscarEnListaSimple(datoBuscar))
        cout << "-Elemento encontrado\n";
    else
        cout << "-El elemento no está en la lista\n";
    if(objLista.buscarEnListaSimpleRecursiva(datoBuscar))
        cout << "--Elemento encontrado\n";
    else
        cout << "--El elemento no está en la lista\n";
    
    // eliminación e un elemento de la lista:
    cout << "¿Qué elemento desea borrar?: ";
    cin >> datoBorrar;
    if(objLista.eliminarElementoDeListaSimple(datoBorrar))
        cout << "Dato borrado de la lista\n";
    else
        cout << "El dato no está en la lista\n";
    
    cout << "Los elementos de la lista son:\n";
    objLista.mostrarListaIter();

    cout << "Borrando toda la lista.\n";
    objLista.eliminarTodosElementosListaSimple();


    //cin.ignore(100, '\n');
    return 0;
}
