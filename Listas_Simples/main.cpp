#include <iostream>
#include <cstdlib>
#include "listas.h"
using namespace std;

int main(int argc, char** argv) {
    //creando el objeto lista
    ListaSimple lista;
    //pideiendo los datos
    int dato;
    char n= 's';
    cout << "Ingrese un dato y para salir ingrese s: ";
    while(n=='s')
    {
        cout << "\nIngrese el dato: ";
        cin >> dato;
       //lista.insertarInicio(dato);
        lista.insertarFinal(dato);
        //
        cout << "desea continuar s/n: ";
        cin >> n;    
    }
    lista.mostrar();
    cout << "Elemento a eliminar: ";
    cin >> dato;
    if(lista.eliminar(dato))
    {
        cout << "*********************" << endl;
        lista.mostrar();  
    }
    else
    {
        cout << "No se encontro el elemento en la lista" << endl;
    }
    return 0;
}

