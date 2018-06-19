#ifndef CLASELISTASIMPLE_H
#define CLASELISTASIMPLE_H

struct Nodo{
    int dato;
    Nodo *sig;
};

class ListaSimple{
    private:
        Nodo *pInicio;
        Nodo *actual;
        
    public:
        ListaSimple();
        void insertarInicioLista(int);
        void insertarFinalLista(int);
        void insertarFinalListaRecursiva(int);
        Nodo *ultimoNodo(Nodo *);
        void mostrarListaIter(void);
        void mostrarListaRecursiva(void);
        void mostrarListaRecursivaAux(Nodo *);
        //int mostrarActual();
        void mostrarListaInversa(void);
        void mostrarListaInversaAux(Nodo *);
        void insertarAntesDeElemento(int, int);
        void insertarDespuesDeElemento(int, int);
        bool buscarEnListaSimple(int);
        bool buscarEnListaSimpleRecursiva(int);
        bool buscarEnListaSimpleRecursivaAux(Nodo *, int);
        bool eliminarElementoDeListaSimple(int);
        void eliminarTodosElementosListaSimple(void);
        void eliminarTodosElementosListaSimpleRecursiva(Nodo *);

};

#endif /* CLASELISTASIMPLE_H */
