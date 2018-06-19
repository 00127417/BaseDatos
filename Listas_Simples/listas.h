struct nodo
{
    int dato;
    nodo *sig;
};
class ListaSimple
{
private:
    nodo *inicio;
public:
    ListaSimple();
    nodo *CrearNodo(int);
    void insertarInicio(int);
    void insertarFinal(int);
    bool eliminar(int);
    void mostrar();
    
};

