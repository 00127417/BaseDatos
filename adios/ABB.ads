void ABB::buscarNodo(nodo *p,int dato){
    if (!p){
        cout<<"el dato no esta"<<endl;
    }
    else{
        if(p->dato==dato){
            cout<<"dato encontrado"<<endl;
        }
        else{
            if(dato<p->dato){
                buscaNodo(p->hijoIzq,dato)
            }
            else{
                buscarNodo(p->hijoDer,dato)
            }
        }
    }
}

void ABB::insercion(nodo *p, int dato){
    if()
}
